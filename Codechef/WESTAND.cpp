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

int process(){

  int t;
  sd(t);
  while(t--){

    int k,n,dish,wait;
    sd(k);
    vector<int>arr[k+5];
    for(int i=0;i<k;i++){

      int x,y;
      sd(x);sd(y);
      arr[i].pb(x);
      arr[i].pb(y);
    }
    sd(n);sd(dish);sd(wait);
    bool flag = 0;
    int sal=INT_MAX;
    for(int i=0;i<k;i++){

      double tim = (double)dish/(double)arr[i][0];
      if(tim<=(double)wait)
        if(arr[i][1]<=sal){
          flag=1;
          sal=arr[i][1];
        }
    }
    if(flag)
      pf("%d\n",sal);
    else
      pf("-1\n");
  }
}
