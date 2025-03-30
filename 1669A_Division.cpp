#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    int rating;
    cin>>t;
    while(t--){
    	cin>>rating;
    	if(rating>=1900){
    		cout<<"Division 1\n";
		}
		else if(1600<=rating && rating<=1899){
	    	cout<<"Division 2 \n";
		}
		else if(1400<=rating && rating<=1599){
	    	cout<<"Division 3 \n";
		}
		else if(rating <=1399){
			cout<<"Division 4\n";
		}
	}
}


