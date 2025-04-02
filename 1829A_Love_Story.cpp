/* 							  A. Love Story
												time limit per test 1 second
												memory limit per test 256 megabytes
Timur loves codeforces. That's why he has a string s having length 10 made containing only lowercase Latin letters.
Timur wants to know how many indices string s differs from the string "codeforces".
For example string s= "coolforsez" differs from "codeforces" in 4 indices, shown in bold.
Help Timur by finding the number of indices where string s differs from "codeforces".
Note that you can't reorder the characters in the string s
.
Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.
Each test case is one line and contains the string s, consisting of exactly 10 lowercase Latin characters.

Output
For each test case, output a single integer — the number of indices where string s differs.
Example

Input:
5
coolforsez
cadafurcie
codeforces
paiuforces
forcescode

Output:
4
5
0
4
9
												*/
#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
   void solve(){
   	int ans = 0;
   	string m = "codeforces";
   	string s;
   	cin>>s;
   	for(i=0;i<10;i++){
   	  if(s[i]!=m[i]){
   	  	 ans++;
	  }
   }
   	cout<<ans<<endl;
} 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
    	solve();
	}


}


