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
#define x first
#define y second
#define println printf('\n')
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
void print(vector <ll> v){for(ll i=0; i<v.size(); i++)
									 cout<<v[i]<<" ";cout<<endl;}
//--------------------------
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int g,b;
	while(1){

		pf("%d\n",count);
	}
	return 0;
}