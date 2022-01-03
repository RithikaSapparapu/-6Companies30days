#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	unsigned long long minn(unsigned long long a, unsigned long long b, unsigned long long c){
	    if(a<b){
	        if(c<a)
	            return c;
	        else
	            return a;
	    }
	    else{
	        if(c<b)
	            return c;
	        else
	            return b;
	    }
	}
	
	unsigned long long getNthUglyNo(int n) {
	    // code here
	    unsigned long long i2 = 0, i3 = 0, i5 = 0;
	    unsigned long long val2 = 2, val3 = 3, val5 = 5;
	    
	    unsigned long long d[n], val;
	    d[0] = 1;
	    for(int i=1; i<n; i++){
	        val = minn(val2, val3, val5);
	        d[i] = val;
    	    if(val == val2){
    	        i2++;
    	        val2 = d[i2]*2;
    	    }
    	    if(val == val3){
    	        i3++;
    	        val3 = d[i3]*3;
    	    }
    	    if(val == val5){
    	        i5++;
    	        val5 = d[i5]*5;
    	    }
	    }
	    return d[n-1];
	}
};
    
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}