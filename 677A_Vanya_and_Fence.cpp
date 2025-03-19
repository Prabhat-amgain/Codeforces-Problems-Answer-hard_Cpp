#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,x=0,y=0;
    int n,h;
    cin>>n>>h;
    int arr[n];
    for(i=0;i<n;i++){
    	cin>>arr[i];
	}
	 for(i=0;i<n;i++){
    	if(arr[i]>h){
    		x+=2;
		}
		else
		 y++;
	}
	int w=x+y;
	cout<<w;
}

