
/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
        for(Node* p =*head; p!=NULL; p=p->next){
            for(Node* q=p->next; q!=NULL; q=q->next){
                if(p->data>q->data){
                    swap(p->data,q->data);
                }
            }
        } 
        
    }
};
/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
        for(Node* p =*head; p!=NULL; p=p->next){
            for(Node* q=p->next; q!=NULL; q=q->next){
                if(p->data>q->data){
                    swap(p->data,q->data);
                }
            }
        } 
        
    }
};
