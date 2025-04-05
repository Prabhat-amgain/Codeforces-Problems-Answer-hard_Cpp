#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
void solve(){
	int a , b;
	cin>>a>>b;
	int c = b-1;
    int x = (c-a)+(b-c);
	cout<<x<<"\n";          
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>t;
    while(t--){
    	solve();
	}
}


