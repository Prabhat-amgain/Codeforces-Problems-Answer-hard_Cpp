#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
void solve(){
   string a,b;
   cin>>a>>b;
   string temp = " ";
   temp = a[0];
   a[0]	= b[0];
   b[0] = temp[0];
   cout<<a<<"  "<<b<<endl;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
    	solve();
	}


}


