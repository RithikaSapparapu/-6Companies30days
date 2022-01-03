#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src){
  string result = "";
  int i=0;
  int count = 1;
  result = result + src[i];
  for(i=0; i<src.length()-1; i++){
      if(src[i]==src[i+1]){
          count++;
      }
      else{
          result = result + to_string(count);
          count = 1;
          result = result + src[i+1];
      }
  }
  result = result + to_string(count);
  return result;
}     
 

