#include <bits/stdc++.h>
using namespace std;
/*
Submitted by : Parth Trehan(markus__)
*/
//--------------------------
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ms(array,value) memset(array,value,sizeof(array))
#define iterate(it, s) for(auto it=s.begin(); it!=s.end(); it++)
#define bcnt __builtin_popcount
#define pb(x) push_back(x)
#define sc scanf
#define pf printf
#define F first
#define S second
#define line printf("\n")
//--------------------------
#define llu long long int unsigned
#define ll long long
#define lli long long int
//--------------------------
#define PI 3.14159265358979323846
#define mod 1000000007
//--------------------------
ll gcd(ll i, ll j){ll temp;if(i<j){temp=i;i=j;j=temp;}while(i%j!=0){
                   temp=i;i=j;j=temp%j;}return j;}
ll lcm(ll i, ll j){ll ans=(i*j);ans/=gcd(i, j);return ans;}
ll modpow(ll n, ll p){ll ans=1;while(p>0){if(p&1)ans=(ans*n)%mod;
                   n=(n*n)%mod;p=p/2;}return ans;}
//--------------------------

void dfs(bool v[],vector<pair<int,int> >G[],int src){

	v[src] = true;
	for(int i=0;i<G[src].size();i++){

		if(!v[G[src][i].F]){

			dfs(visit,v,G,G[src][i].F);
			visit[src]
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int> > G[n+5];
    long sum = 0;
    int st;
    for(int i=1;i<=n;i++){

	    int x;
	    int y;
	    cin>>x>>y;
	    if(x!=0){

	    		sum+=y;
	    		arr[i].pb(make_pair(x,y));
	    		arr[x].pb(make_pair(i,y));
		}
		else
			st = i;
    }
    if(sum%3 == 0){

	    int visit[n+5];
	    bool v[n+5];
	    ms(visit,-1);
	    ms(v,false);
	    dfs(visit,v,G,st);
    }
    else
      cout<<-1;
    return 0;
}
