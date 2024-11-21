#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int n=str.length();
    int count=0;
   for(int i=0;i<n;i++)
   {
      if(int(str[i])>=65 && int(str[i])<=90)
      count=i;
   }
   cout<<count+1<<endl;
}