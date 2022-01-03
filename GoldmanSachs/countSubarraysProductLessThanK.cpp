// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        //using prefix product array!
        vector <long long> prefix;
        prefix.push_back(a[0]);
        for(int i=1; i<n; i++){
            prefix.push_back(prefix[i-1]*a[i]);
        }
        int count=0;
        
        int j;
        for(j=0; j<n; j++){
            if(prefix[j]>k)
                break;
        }
        count = count + j;
        
        
        for(int i=1; i<n; i++){
            for(j=i; j<n; j++){
                if((prefix[j]/prefix[i-1])>k)
                    break;
            }
            count = count + (j-i);
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends