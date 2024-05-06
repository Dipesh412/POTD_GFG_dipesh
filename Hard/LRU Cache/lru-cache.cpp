//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
    int size = 0;
    queue<int> q;
    unordered_map<int,pair<int,int>>mp;
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code here
        size = cap;
    }
    
    //Function to return value corresponding to the key.
    int GET(int key)
    {
        
        int ans = 0;
        if(mp.find(key) == mp.end()){
            ans = -1;
            return ans;
        }
        else ans = mp[key].first;
        mp[key].second++;
        q.push(key);
        return ans;
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        // your code here
        if(mp.find(key) != mp.end()){
            mp[key].first = value;
        }
        else{
            if(mp.size() < size){
                mp[key] = {value,0};
            }
            else{
                while(mp[q.front()].second > 1){
                    mp[q.front()].second--;
                    q.pop();
                }
                mp.erase(q.front());
                q.pop();
                mp[key] = {value,0};
            }
        }
        mp[key].second++;
        q.push(key);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends