#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> x;

int main()
{
   int n; cin>>n; x.resize(n);
   for(int i = 0; i<n; ++i) cin>>x[i];
   int a, b; cin>>a>>b;

   sort(x.begin(), x.end());
   x.erase(unique(x.begin(), x.end()), x.end());

   int ans = 0; vector<int> xs;
   while(a != b)
   {
      int st = a-1;
      int sz = x.size();
      xs.resize(0);

      for(int i = sz-1; i >= 0; --i)
      {
         int bel = a / x[i];
         bel *= x[i];
         if(bel >= b)
         {
            st = min(st, bel);
            xs.push_back(x[i]);
         }
      }
      a = st; ++ans; x = xs;
   }

   cout<<ans<<endl;
   return 0;
}