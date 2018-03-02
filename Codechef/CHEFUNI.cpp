#include <bits/stdc++.h>
using namespace std;
//--------------------------
int markus(int);bool markus(string);
void markus(){

  markus("Submitted by : Parth Trehan(markus__)");
  markus(001);markus(111);markus(100);
  markus("Graphic Era University");
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
  return a;
}
bool markus(string str){
  //Date
  markus(2);markus(12);markus(17);
  return true;
}
//--------------------------
FILE *fp,*fp1;

inline int CC(int x,int y,int z,int a,int b,int c){

  int cost = 0;
  int mn = min(x,min(y,z));
  cost = min(c,min(3*a,a+b))*mn;
  x-=mn,y-=mn,z-=mn;
  int mx = max(x,max(y,z));
      mn = min(x,min(y,z));
  int mid = (x+y+z)-(mx+mn);
  cost+=min((mid+mx)*a,(mid*b)+(mx-mid)*a);
  return cost;
}

inline int BB(int x,int y,int z,int a,int b,int c){

  int mx = max(x,max(y,z));
  int mn = min(x,min(y,z));
  int mid = (x+y+z)-(mx+mn);
  int x1,y1,z1;
  int cost = 0;
  x1 = x;y1 = y;z1 = z;
  int res = (mid+mn)-mx;
  if(res<0)
    return INF;
  x1 = x-res;
  y1 = y-res;
  z1 = z-res;
  if(x1<0 || y1<0 || z1<0)
    return INF;
  int sum = x1+y1+z1;
  cost+=min(((sum/2)*b+(sum%2)*a),sum*a);
  cout<<cost<<endl;
  bool flag = (res%2==0);
  if(!flag){

    res--;
    cost+=min(res*c,min(3*res*a,(3*res)/2*b));
    cost+=(min(c,min(a+b,3*a)));
  }
  else{
    cost+=min(res*c,min(3*res*a,(3*res)/2*b));
    cout<<res*c<<endl;
    cout<<3*res*a<<endl;
    cout<<(3*res)/2 *b<<endl;
  }
  return cost;
}

inline int AA(int x,int y,int z,int a,int b,int c){

  int cost = 0;
  int mx = max(x,max(y,z));
  int mn = min(x,min(y,z));
  int mid = (x+y+z)-(mx+mn);
  int pair = mid;
  mx-=mid;
  mid = 0;
  cost = (min(pair*b,2*pair*a));
  pair = min(mx,mn);
  cost+=(min(pair*b,2*a*pair)+abs(mx-mn)*a);
  return cost;
}

int solve(){

  int x,y,z,a,b,c,sum=0;
  fscanf(fp,"%d%d%d%d%d%d",&x,&y,&z,&a,&b,&c);
  int cost1 = CC(x,y,z,a,b,c);
  int cost2 = BB(x,y,z,a,b,c);
  int cost3 = AA(x,y,z,a,b,c);
  sum = a*(x+y+z);
  if(cost1<=0)
    cost1 = INF;
  if(cost2<=0)
    cost2 = INF;
  if(cost3<=0)
    cost3 = INF;
  cout<<sum<<endl;
  cout<<cost1<<endl;
  cout<<cost2<<endl;
  cout<<cost3<<endl;
  fprintf(fp1,"%d\n",min(sum,min(cost1,min(cost2,cost3))));
  return 0;
}
int process(){

  int t;
  fp = fopen("Input.txt","r");
  fp1 = fopen("Output.txt","w");
  fscanf(fp,"%d",&t);
  while(t--){

    solve();
  }
  return 0;
}
