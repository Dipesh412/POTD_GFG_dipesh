//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int merge(int arr[],int low,int mid,int high){
        int i=low;
        int j=mid+1;
        vector<int>temp;
        int count=0;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
                count+=mid-i+1;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int i=low; i<=high; i++){
            arr[i]=temp[i-low];
        }
        return count;
    }
    int mergeSort(int arr[],int low,int high){
        int count=0;
        if(low<high){
            int mid = low +(high-low)/2;
            count+=mergeSort(arr,low,mid);
            count+=mergeSort(arr,mid+1,high);
            count+=merge(arr,low,mid,high);
            return count;
        }
        return 0;
    }
    int countPairs(int arr[] , int n ) 
    {
        int cnt=0;
        for(int i=0; i<n; i++){
            arr[i]=arr[i]*i;
        }
        cnt = mergeSort(arr,0,n-1);
        return cnt;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	Solution ob;
    	cout<<ob.countPairs(a, n)<<endl;
    }
}
// } Driver Code Ends