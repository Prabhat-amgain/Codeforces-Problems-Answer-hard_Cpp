/*
                                 A. Word Capitalization
                                           time limit per test2 seconds
                                           memory limit per test256 megabytes
Capitalization is writing a word with its first letter as a capital letter.
Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word.
This word consists of lowercase and uppercase English letters.
The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
Input:
ApPLe
Output:
ApPLe

Input:
konjac
Output:
Konjac
*/

#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
   
   string s;
   cin>>s;
   int l = s.length();
   char ch;
   ch=s[0];
   if(islower(ch))
   {
   	 s[0]=toupper(ch);
   	 cout<<s;
   }
   else
     cout<<s; 
    
}
