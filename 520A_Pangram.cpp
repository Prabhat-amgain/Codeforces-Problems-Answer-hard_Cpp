/*
                                                                  A. Pangram
                                                                                         time limit per test 2 seconds
                                                                                         memory limit per test 256 megabytes
A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once.
Pangrams are often used to demonstrate fonts in printing or test the output devices.
You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram.
We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

Input:
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.
The second line contains the string. The string consists only of uppercase and lowercase Latin letters.
Output:
Output "YES", if the string is a pangram and "NO" otherwise.
Examples:
Input:
12
toosmallword
Output:
NO

Input:
35
TheQuickBrownFoxJumpsOverTheLazyDog
Output:
YES
        																	*/
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

