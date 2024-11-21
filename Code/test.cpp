#include<bits/stdc++.h>
#define ll int
#define max(A,B) (A<B?B:A)
#define min(A,B) (A<B?A:B)
#define bug cout<<"I AK NOIP!"<<'\n';
#define gc getchar
using namespace std;
const int N=1005,mod=998244353;
inline ll read(){ll res=0,f=0;char ch=gc();for(;!isdigit(ch);ch=gc()) f=(ch=='-'?1:0);for(;isdigit(ch);ch=gc()) res=(res<<3)+(res<<1)+(ch^'0');return f?-res:res;}

long long ansc,ansf,c,F;
int n,m,id,T;
int f[N][N],jil,jilf,jis;
char Map[N][N];

signed main()
{

    freopen("in.txt", "r", stdin);
	T=read(),id=read();
	while(T--)
	{
		memset(f,0,sizeof f);
		n=read(),m=read();c=read(),F=read();
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>Map[i][j];
			for(int i=1;i<=n;i++)
				for(int j=m-1;j>=1;j--)
				{
					if(Map[i][j]=='1') f[i][j]=-1;//如果不能种花，就变成-1 
					else  if(Map[i][j+1]=='0') f[i][j]=f[i][j+1]+1;//能种花，就加上前缀和 
				}
		for(int j=1;j<m;j++)
		{
			jis=jil=jilf=0;
			for(int i=1;i<=n;i++)
			{
				if(f[i][j]==-1){jis=jilf=jil=0;continue ;}
				ansc=ansc%mod+(1ll*f[i][j]*(jil%mod))%mod;
				ansf=(ansf%mod+jilf%mod)%mod;
				jilf=(jilf+(1ll*f[i][j]*(jil%mod))%mod)%mod;
				jil+=max(0,f[i-1][j]);
			}
		}
		cout<<(c*ansc)%mod<<' '<<(F*ansf)%mod<<'\n';
		ansc=ansf=0;
	}
	return 0;
}