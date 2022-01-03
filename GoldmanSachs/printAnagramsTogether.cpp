// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        //code here
        /*vector<string> temp;
        string str="";
        
        for(int i=0; i<string_list.size(); i++){
            str = string_list[i];
            sort(str.begin(), str.end());
            temp.push_back(str);
        }
        vector<vector<string>> result;
        
        map<string, vector<string>> mapp;
        for(int i=0; i<temp.size(); i++){
            
        }*/
        
        unordered_map<string,vector<string> > store;
   
        for (int i = 0; i < string_list.size(); i++){
            string tempString(string_list[i]);
            sort(tempString.begin(),tempString.end());
            store[tempString].push_back(string_list[i]);
        }
        
        vector<vector<string>> result;
        for (auto it:store){
            result.push_back(it.second);
        }
        return result;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends