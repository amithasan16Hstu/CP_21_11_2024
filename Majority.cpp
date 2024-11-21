#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int sum=0;
   int sum1=0;
   string str;
   while(n--)
   {
      cin>>str;
      if(str=="For")
      sum++;
      else if(str=="Against")
      sum1++;
   }
   if(sum>sum1)
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl;
}