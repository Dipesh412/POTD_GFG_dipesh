/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        vector<int>arr;
        vector<int>arr1;
        int cnt=0;
        while(head1!=NULL){
            arr.push_back(head1->data);
            head1=head1->next;
        }
        while(head2!=NULL){
            arr1.push_back(head2->data);
            head2=head2->next;
        }
        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());
        int i=0;
        int j=arr1.size()-1;
        while(i<arr.size() && j>=0){
            if((arr[i]+arr1[j])==x){
                cnt++;
                i++;
                j--;
            }
            else if((arr[i]+arr1[j])<x){
                i++;
            }
            else{
                j--;
            }
        }
        return cnt;
        
    }
};
