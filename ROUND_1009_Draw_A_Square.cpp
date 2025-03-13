
#include<bits/stdc++.h>
using namespace std;

int main(){
     int i,n=0;
     
     cin>>n;
     int arr[n*4];
     for(i=0;i<n*4;++i){
       cin>>arr[i];
	 }
	 for(i=0;i<n*4;i+=4){
	 	if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2] && arr[i+2]==arr[i+3])
	 	  cout<<"YES"<<endl;
	 	else
	  cout<<"NO"<<endl;
	 }
}


