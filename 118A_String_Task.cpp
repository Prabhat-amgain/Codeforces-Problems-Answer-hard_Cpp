#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int i,j;
	
	string s;
	cin>>s;
	string vowels = "aeiouy";
   for(char &ch:s){
   	ch = tolower(ch);
   }
   string s2;
    for (char ch : s) {
        if (vowels.find(ch) == string::npos) { // If character is not a vowel
            s2 += '.';
            s2 += ch;
        }
    }

    cout << s2 << endl;
}

