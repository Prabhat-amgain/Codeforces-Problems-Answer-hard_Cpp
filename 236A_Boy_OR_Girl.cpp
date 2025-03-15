#include<bits/stdc++.h>
#include <unordered_set>
#include<string>
using namespace std;

int main(){

	 int i;
    string s;
    cin>>s;
    unordered_set<char> dis;
    for(char ch : s){
    	dis.insert(ch);
	} 
	int count = dis.size();
	    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;  
    } else {
        cout << "IGNORE HIM!" << endl;  
    }

}


