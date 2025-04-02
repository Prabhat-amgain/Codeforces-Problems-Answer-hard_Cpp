#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
   void solve(){
   	int ans = 0;
   	string m = "codeforces";
   	string s;
   	cin>>s;
   	for(i=0;i<10;i++){
   	  if(s[i]!=m[i]){
   	  	 ans++;
	  }
   }
   	cout<<ans<<endl;
} 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
    	solve();
	}


}


