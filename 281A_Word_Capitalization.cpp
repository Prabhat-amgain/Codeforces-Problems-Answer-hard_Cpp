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
