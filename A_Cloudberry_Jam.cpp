/*							 A. Cloudberry Jam
												time limit per test 2 seconds
												memory limit per test 512 megabytes
The most valuable berry of the Karelian forests is cloudberry. To make jam from cloudberries, you take equal amounts of berries and sugar and cook them.
Thus, if you have 2 kg of berries, you need 2 kg of sugar. However, from 2 kg of berries and 2 kg of sugar, you will not get 4 kg of jam, as one might expect,
but only 3 kg, since some of the jam evaporates during cooking. Specifically, during standard cooking, exactly a quarter (or 25%) of the jam evaporates.

How many kilograms of cloudberries are needed to prepare n 3-kilogram jars of jam?

Input
Each test consists of several test cases. The first line contains a single integer t (1≤t≤104) — the number of test cases.
The following lines describe the test cases.

Each test case contains a single integer n (1≤n≤108) — the number of jars of jam that need to be prepared.

Output
For each test case, output a single integer — the amount of berries needed for the jam in kilograms.
Example
Input:
2
1
3
Output:
2
6
Note
For the test case 1, explanations are given in the text of the statement — to prepare 1 jar of jam, you need 2 kilograms of cloudberries.
Consider the test case 2: if we take 6 kilograms of berries and 6 kilograms of sugar, we get (6+6)⋅34=9 kilograms of jam; which gives 93=3 jars of jam.
																				*/
#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
void solve(){
  cin>>n;
  	cout<<2*n<<endl;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
    	solve();
	}
}


