#C题
```
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
#include<vector>
#include<map>
using namespace std;
const int maxn = 2e6+10;

int read(){
	int x=0,f=1;
	char c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}
	while(isdigit(c)){x=(x<<3)+(x<<1)+c-48;c=getchar();}
	return x*f;
}

int k,m,n;
int a[maxn],b[maxn],c[maxn],d[maxn],fa[maxn],p[maxn];
pair<int,int> P[maxn];
int sum[maxn];
void add(int x){for(int i=x;i<=n;i+=i&-i)sum[i]++;}
int query(int x){int SUM=0;for(int i=x;i;i-=i&-i)SUM+=sum[i];return SUM;}
int main(){
	n=read();
	for(int i=1;i<=n;i++)a[i]=read();
	for(int i=1;i<=n;i++)b[i]=read();
	for(int i=1;i<=n;i++){c[i]=read();P[c[i]]=make_pair(i,1);}
	for(int i=1;i<=n;i++){d[i]=read();P[d[i]]=make_pair(i,2);}
	for(int i=1;i<=n;i++){fa[a[i]]=b[i];fa[b[i]]=a[i];}
	for(int i=1;i<=n;i++){
		if(fa[c[i]]!=d[i] || fa[d[i]]!=c[i]){puts("dldsgay!!1");return 0;}
		if((P[a[i]].first+P[a[i]].second)%2!=(i+1)%2){puts("dldsgay!!1");return 0;}
		if((P[b[i]].first+P[b[i]].second)%2!=(i+2)%2){puts("dldsgay!!1");return 0;}
	}
	for(int i=1;i<=n;i++)p[a[i]]=i;
	for(int i=1;i<=n;i++)c[i]=p[c[i]]+p[d[i]];
	long long ans=0;
	for(int i=n;i>=1;i--){
		ans+=query(c[i]);
		add(c[i]);
	}
	printf("%lld\n",ans);
	return 0;
}
```
