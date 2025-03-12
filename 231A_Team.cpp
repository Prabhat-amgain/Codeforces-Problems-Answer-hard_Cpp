#include<bits/stdc++.h>
using namespace std;

int main(){
  int i,n,m,c=0;
  
   cin>>n; // take input of number of problems
   
   m=n*3;
   int arr[m];
   for(i=0;i<m;++i){
   	
   	cin>>arr[i];    /* take input of problems
	   	               that can be solved by each person seperated by space */
   }
   
    for(i=0;i<m;i+=3){ 
    	int sm = arr[i]+arr[i+1]+arr[i+2];
    	if(sm>=2)
    	 c++; 
	}
		cout<<c<<endl;
}

