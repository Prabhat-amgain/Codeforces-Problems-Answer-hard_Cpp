#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int i,j,upp=0,low=0;
    string s;
    cin>>s;
     int l = s.length();
    for (i = 0; i < l; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')  
            upp++;
        else if (s[i] >= 'a' && s[i] <= 'z')  
            low++;
        else
            cout << "no";
}
   if(upp<=low)
   {
   	transform(s.begin(), s.end(), s.begin(), ::tolower);
   	cout<<s;
   }
   else if(upp>low)
   {
   	transform(s.begin(), s.end(), s.begin(), ::toupper);
   	cout<<s;
   }
   else
      return 0;
}


