#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
    	int a,b,c;
    	cin>>a>>b>>c;
    	if(a==b+c){
    		cout<<"YES\n";
		}
		else if(b==a+c){
			cout<<"YES\n";
		}
		else if(c==a+b){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}


