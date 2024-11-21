#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t, i, m, j;
   cin >> t;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      m = 0;
      j = 0;

      while (n--)
      {
         cin >> i;

         if (i >= k)
         {
            m += i;
         }
         else
         {
            if (!i && m)
            {
               m--;
               j++;
            }
         }
      }
      cout << j << endl;
   }
   return 0;
}
