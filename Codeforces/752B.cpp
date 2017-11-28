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
bool cmp1(pair<long int,long int> p,pair<long int,long int> q){

	return (p.y<q.y);
}
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n,m,k;
	char arr[26];
	ms(arr,'*');
	string s1,s2;
	cin>>s1>>s2;
	set<pair<char,char> > ans;
	int l = s1.length();
	bool flag = true;
	for(int i=0;i<l;i++){

		if(arr[s1[i]-'a'] == '*' && arr[s2[i]-'a'] == '*'){

			arr[s1[i]-'a'] = s2[i];
			arr[s2[i]-'a'] = s1[i];
			if(s1[i]!=s2[i])
				ans.insert(make_pair(s1[i],s2[i]));
		}
		else if(arr[s1[i]-'a'] == s2[i] && arr[s2[i]-'a'] == s1[i]){

			continue;
		}
		else{

			flag = false;
			break;
		}
	}
	if(flag){

		cout<<ans.size()<<endl;
		set<pair<char,char> > :: iterator it;
		for(it = ans.begin();it!=ans.end();++it){

			cout<<(*it).x<<" "<<(*it).y<<endl;
		}
	}
	else
		cout<<-1;
	return 0;
}
