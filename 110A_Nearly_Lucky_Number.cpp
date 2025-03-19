#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j;
	long long c=0;
    long long int n;
    cin>>n;
    int x=  floor(log10(n)+1);
    for(i=0;i<x;i++)
    {
    	if(n%10==4 || n%10==7){
           c++;   
	   }  
	    n=n/10;    
	}
	
     if(c==4 || c==7){
     	cout<<"YES";
	 }
	 else
	   cout<<"NO";
}

