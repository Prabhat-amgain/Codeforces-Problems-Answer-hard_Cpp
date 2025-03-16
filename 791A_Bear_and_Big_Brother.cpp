#include<bits/stdc++.h>
using namespace std;

int main(){
	int c=0;
  int i,j;
  int a,b;
  cin>>a>>b;
  
  if(a<=b){
while(a<=b){
  	c++;
  	a=a*3;
  	b=b*2;
  }
  cout<<c;
  }
  else {
  	cout<<"0";
  }
}
  

