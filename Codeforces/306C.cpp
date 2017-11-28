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
#define line printf('\n')
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
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string str;
	cin>>str;
	int l = str.length();
	int arr[105];
	for(int i=0;i<l;i++)
		arr[i] = str[i]-'0';
	for(int i=0;i<l;i++)
		for(int j=i;j<l;j++)
			for(int k=j;k<l;k++){
				if(arr[i]%8 == 0){
					cout<<"YES\n";
					cout<<arr[i];
					return 0;
				}
				else if((arr[i]*10 + arr[j])%8 == 0 && i!=j){

					cout<<"YES\n";
					cout<<arr[i]*10+arr[j];
					return 0;
				}
				else if((arr[i]*100 + arr[j]*10 + arr[k])%8 == 0 && i!=j && j!=k && i!=k){

					cout<<"YES\n";
					cout<<(arr[i]*100 + arr[j]*10 + arr[k]);
					return 0;
				}
			}
	cout<<"NO";
	return 0;
}
