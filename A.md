# A题
~~过于简单~~
```
#include<bits/stdc++.h>
int n,m;
int main(){
	scanf("%d%d",&n,&m);
	printf("%d",(int)(pow(n,1.0/m)+1e-12));
	return 0;
}
```
下面是我本人写的
```
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
```
