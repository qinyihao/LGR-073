#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull a,b;
int main()
{
  ull ans=0;
  ull x=1;
  cin>>a>>b;
  while(pow(x,b)<=a)
  {
    x++;
    ans++;
  }
  cout<< ans;
  return 0;
}
