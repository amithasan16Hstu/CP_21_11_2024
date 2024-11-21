#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str,str1;
   cin>>str;
   cin>>str1;
   int n=str.length();
   string str_chk=str;
   reverse(str_chk.begin(),str_chk.end());
   //cout<<str_chk<<endl;
   if(str_chk==str1)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
}