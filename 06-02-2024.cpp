//Node Structure
/*struct Node
{
	int data;
	Node *left, *right;
};*/

class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    
    set<Node*>ans;
    void find(Node* root,int cnt,vector<Node*>v,int k){
        if(root==NULL) return;
        v.push_back(root);
        if(root->left==NULL && root->right==NULL){
            int distance = cnt-k;
            if(distance>=0){
                ans.insert(v[distance]);
                
            }
            return;
        }
        find(root->left,cnt+1,v,k);
        find(root->right,cnt+1,v,k);
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
        vector<Node*>v;
        find(root,0,v,k);
        return ans.size();
    }
};
