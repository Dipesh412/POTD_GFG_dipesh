#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:\
    int countSlipts(int arr[],int n,int possibleSum){
        int cuts=1;
        long long sum = 0;
        for(int i=0; i<n; i++ ){
            if(sum+arr[i]<=possibleSum){
                sum+=arr[i];
            }
            else{
                cuts++;
                sum=arr[i];
            }
        }
        return cuts;
    }
    int findArray(int arr[],int n, int m){
        if(m>n) return -1;
        int low = *max_element(arr,arr+n);
        int high = accumulate(arr,arr+n,0);
        
        while(low<=high){
            int mid = (low+high)/2;
            int splits = countSlipts(arr,n,mid);
            if(splits>m){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        return low;
    }
    int splitArray(int arr[] ,int N, int K) {
        return findArray(arr,N,K);
    }
};
class Solution {
  public:\
    int countSlipts(int arr[],int n,int possibleSum){
        int cuts=1;
        long long sum = 0;
        for(int i=0; i<n; i++ ){
            if(sum+arr[i]<=possibleSum){
                sum+=arr[i];
            }
            else{
                cuts++;
                sum=arr[i];
            }
        }
        return cuts;
    }
    int findArray(int arr[],int n, int m){
        if(m>n) return -1;
        int low = *max_element(arr,arr+n);
        int high = accumulate(arr,arr+n,0);
        
        while(low<=high){
            int mid = (low+high)/2;
            int splits = countSlipts(arr,n,mid);
            if(splits>m){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        return low;
    }
    int splitArray(int arr[] ,int N, int K) {
        return findArray(arr,N,K);
    }
};
