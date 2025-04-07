#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>=10){
		cout<<"Yes\n";
	}
	else if(b+c>=10){
		cout<<"Yes"<<endl;
	}
	else if(a+c>=10){
		cout<<"Yes\n";
	}
	else{
		cout<<"No"<<endl;
	}
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
    	solve();
	}


}


