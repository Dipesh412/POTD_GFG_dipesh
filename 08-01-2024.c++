#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

class Solution
{
    public:
    Node* reverse(Node* head){
        Node* temp = head;
        Node* prev = NULL;
        while(temp!=NULL){
            Node* newNode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = newNode;
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node* f = node1;
        Node* s = node2;
        
        
        Node* head = new Node;
        head->data=-1;
        Node* temp = head;
        
        while(f!=NULL && s!=NULL){
            if(f->data <= s->data){
                temp->next = f;
                f=f->next;
            }
            else{
                temp->next =s;
                s=s->next;
            }
            temp=temp->next;
        }
        
        if(f!=NULL){
            temp->next = f;
        }
        if(s!=NULL){
            temp->next =s;
        }
        
        Node* result = reverse(head->next);
        return result;
    }  
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}
