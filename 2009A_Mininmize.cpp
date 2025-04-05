/*								 A. Minimize!
														time limit per test 1 second
														memory limit per test 256 megabytes
You are given two integers a and b (a≤b). Over all possible integer values of c (a≤c≤b), find the minimum value of (c−a)+(b−c).

Input:
The first line contains t (1≤t≤55) — the number of test cases.
Each test case contains two integers a and b (1≤a≤b≤10).
Output
For each test case, output the minimum possible value of (c−a)+(b−c) on a new line.
Example
Input:
3
1 2
3 10
5 5
Output:
1
7
0
Note
In the first test case, you can choose c=1 and obtain an answer of (1−1)+(2−1)=1. It can be shown this is the minimum value possible.
In the second test case, you can choose c=6 and obtain an answer of (6−3)+(10−6)=7. It can be shown this is the minimum value possible.
																			*/
#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
void solve(){
	int a , b;
	cin>>a>>b;
	int c = b-1;
    int x = (c-a)+(b-c);
	cout<<x<<"\n";          
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>t;
    while(t--){
    	solve();
	}
}


