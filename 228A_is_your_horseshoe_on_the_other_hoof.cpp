#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
	int i,j;
	
    vector<int> arr(4);
    for(i=0;i<4;i++){
      cin>>arr[i];	
	}
	unordered_set<int> dis;
	for(int x : arr){
	 dis.insert(x);	
	}
	int y= dis.size();
    int z = 4-y;
    cout<<z;
}

