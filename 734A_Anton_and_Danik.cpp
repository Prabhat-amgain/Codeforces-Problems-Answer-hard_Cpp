#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j;
int n,x=0,y=0;
  cin>>n;
  string s;
  cin>>s;
  for(i=0;i<n;i++){
  	if(s[i]=='A')
  	  x++;
  	else
  	  y++;  
  }
  if(x>y){
  	cout<<"Anton";
  }
  else if(x<y){
  	cout<<"Danik";
  }
  else
    cout<<"Friendship";
}

