#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j;
     int n,x=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
    	cin>>arr[i];
	}
	for(i=0;i<n;i++){
    	x +=arr[i];
	}
	double y = (double) x/n;
	cout<<setprecision(12)<<y;
}

