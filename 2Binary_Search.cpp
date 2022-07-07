//Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int low =0,high=n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid]==k)
            return mid;
            else if (arr[mid]>k)
            high =mid-1;
            else low = mid+1;
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
  // } Driver Code Ends