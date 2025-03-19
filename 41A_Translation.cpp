#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int i,j;
    string s,t,r;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    if(s == t)
     cout<<"YES";
    else
      cout<<"NO";
}

