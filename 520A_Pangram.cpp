#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j;
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    unordered_set<char> dis;
    for(char ch : s){
    	dis.insert(ch);
	}
    if(dis.size()==26)
       cout<<"YES";
    else
      cout<<"NO";
}

