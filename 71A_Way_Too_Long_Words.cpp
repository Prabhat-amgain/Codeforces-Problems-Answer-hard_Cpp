#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char c1,c2;
	int n,i;
	cin>>n;
	string s1,s[n];
	for(i=0;i<n;++i)
	{
		cin>>s[i];
	}
	for(i=0;i<n;++i)
	{  int l;
	   s1 =s[i];
	   l=s[i].length();
	   if(l>10){
	   	c1=s1[0];el
	   	c2=s1[l-1];
	    l-=2;
		cout<<c1<<l<<c2<<endl;	
	   }
	   else{
	   	cout<<s1<<endl;
	   }   	
	}
}

