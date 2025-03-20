#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int i,j;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
	cin>>arr[i];
	}
	int x = 1;
    if (binary_search(arr.begin(), arr.end(),x))
        cout << "HARD";
    else
        cout <<"EASY";
}

