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

bool seive[1000000];
void seive_erate(){

	ms(seive,1);
	seive[1] = false;
	for(int i=4;i<=1000000;i+=2)
		seive[i] = 0;
	for(int i=3;i<=1000000;i+=2){

		if(seive[i])
		for(int j=2*i;j<=1000000;j+=i){

			seive[j] = 0;
		}
	}
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	seive_erate();
	int n,m;
	cin>>n>>m;
	int arr[n+5][m+5];
	for(int i=0;i<n;i++)
		ms(arr[i],0);
	for(int i=0;i<n;i++){

		for(int j=0;j<m;j++){

			int x;
			cin>>x;
			if(seive[x])
				arr[i][j] = 0;
			else{
				for(int k = x+1;k<=1000000;k++){

					if(seive[k]){

						arr[i][j] = k-x;
						break;
					}
				}
			}
		}
	}
	int rowM = INT_MAX,colM = INT_MAX,ans = -1;
	for(int i=0;i<n;i++){

		int count = 0;
		for(int j=0;j<m;j++){

			count+=arr[i][j];
		}
		if(count<rowM) rowM = count;
	}
	for(int j=0;j<m;j++){

		int count =0;
		for(int i=0;i<n;i++)
				count+=arr[i][j];
		if(count<colM)	colM = count;
	}
	cout<<min(colM,rowM);

	return 0;
}
