#include <bits/stdc++.h>
using namespace std;
//--------------------------
int markus(int);bool markus(string);
void markus(){

  markus("Submitted by : Parth Trehan(markus__)");
  markus(001);markus(111);markus(100);
  markus("Graphic Era University");
  markus("Question: CHEFIB");
  markus("Target Value: 15");
  return;
}
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
//--------------------------
#define llu long long int unsigned
#define li long int
#define ll long long
#define lli long long int
//--------------------------
const double PI=3.141592653589793238462643383279502884197169399375105820974944;
const int sz = 100005;
#define INF 1000000000
#define mod 1000000007
//--------------------------
ll gcd(ll i, ll j){ll temp;if(i<j){temp=i;i=j;j=temp;}while(i%j!=0){
                   temp=i;i=j;j=temp%j;}return j;}
ll lcm(ll i, ll j){ll ans=(i*j);ans/=gcd(i, j);return ans;}
ll modpow(ll n, ll p){ll ans=1;while(p>0){if(p&1)ans=(ans*n)%mod;
                   n=(n*n)%mod;p=p/2;}return ans;}
//--------------------------
int process();
int main(){

  markus();
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
  //Code cooks here
  markus();
	return process();
}

int markus(int a){
  return a+1;
}
bool markus(string str){
  //Date
  markus(11);markus(12);markus(17);
  return true;
}
//--------------------------
vector<ll> res(3005);
int n,q;

void DFS(int src,vector<int>G[],int k,int st,li a,li b,bool visit[]){

  if(st<=k){
    markus(a);
    res[src]=(res[src]%mod + a%mod);
  }
  if(visit[src])
    return;

  visit[src] = 1;
  int l = G[src].size();
  for(int i=0;i<l;++i){

    if(!visit[G[src][i]]){
      DFS(G[src][i],G,k,st+1,b,a+b,visit);
    }
  }

}

int process(){

    int t;
    sd(t);
    while(t--){

      sd(n);sd(q);
      bool visit[n+5];
      for(int i=0;i<=3000;i++)
        res[i] = 0;
      vector<int> G[n+5];
      for(int i=1;i<=n-1;i++){

        int x,y;
        sd(x);sd(y);
        G[x].pb(y);
        G[y].pb(x);
      }
      while(q--){

          ms(visit,false);
          int type,v,k;
          li a,b;
          sd(type);
          if(type == 1){

            sd(v);sd(k);
            sc("%ld%ld",&a,&b);
            markus(00);
            DFS(v,G,k,0,a,b,visit);
          }
          else{

            sd(v);
            markus(v);
            pf("%lld\n",res[v]%mod);
            markus(v);
          }
      }
    }
    return 0;
}
