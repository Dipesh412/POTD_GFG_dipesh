//User function Template for C++
/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root) {
        // Code here
        vector<int>ans;
        deque<Node*>q;
        q.push_front(root);
        int level=0;
        while(!q.empty()){
            if(!(level%2)){
                int sz=q.size();
                while(sz-->0){
                    Node* node=q.front();
                    q.pop_front();
                    ans.push_back(node->data);
                    if(node->left) q.push_back(node->left);
                    if(node->right) q.push_back(node->right);
                }
            }else{
                int sz=q.size();
                while(sz-->0){
                    Node* node=q.back();
                    q.pop_back();
                    ans.push_back(node->data);
                    if(node->right) q.push_front(node->right);
                    if(node->left) q.push_front(node->left);
                }
            }
            level++;
        }
        return ans;
    }
};
