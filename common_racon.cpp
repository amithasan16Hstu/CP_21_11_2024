#include<bits/stdc++.h>
using namespace std;
int main()
{
   int h,k;
   cin>>h>>k;
   int sum=0;
   while(k--)
   {
      int x;
      cin>>x;
      sum+=x;
   }
   if(sum>=h)
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl;
}