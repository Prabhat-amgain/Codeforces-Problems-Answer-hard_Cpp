/*  						 A. A+B Again?
										time limit per test1 second
										memory limit per test256 megabytes
Given a two-digit positive integer n, find the sum of its digits.
InputThe first line contains an integer t (1≤t≤90) — the number of test cases.
The only line of each test case contains a single two-digit positive integer n (10≤n≤99).
Output
For each test case, output a single integer — the sum of the digits of n.
Example
Input
8
77
21
40
34
19
84
10
99
Output
14
3
4
7
10
12
1
18

											*/
#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
 void solve(){
 	cin>>n;		
 		int x = n%10;
 		int m = n/10;
 		int  y= m+x;
 		cout<<y<<endl;
	 
 }
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
  cin>>t;
  while(t--){
  	solve();
  }


}


