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

char arr[105][105];
bool visit[105][105];
char *str = (char*)"ALLIZZWELL";
int l = 10;
int r,c;
int xp[] = {-1,-1,-1,0,0,1,1,1};
int yp[] = {-1,0,1,-1,1,-1,0,1};

bool isValid(int p,int q, int ry){

	int X = p+xp[ry];
	int Y = q+yp[ry];
	if(0<=X && X<=r && 0<=Y && Y<=c)
		return true;
	else
		return false;
}

bool dfs(int p,int q,int pos){

	bool res;
	visit[p][q] = true;
	//cout<<"searching "<<p<<" "<<q<<endl;
	//cout<<pos<<endl;
	if(pos == 10)
		return true;
	else{

		for(int i=0;i<8;++i){

			 if(isValid(p,q,i) && arr[p+xp[i]][q+yp[i]] == str[pos] && !visit[p+xp[i]][q+yp[i]]){

				//visit[p+xp[i]][q+yp[i]] = true;
				res = dfs(p+xp[i],q+yp[i],pos+1);
				if(res == true)
					return res;
				//visit[p+xp[i]][q+yp[i]] = false;
			}
		}
	}
	//visit[p][q] = false;
	res = false;
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){

		cin>>r>>c;
		for(int i=0;i<105;i++)
			memset(arr[i],'\0',sizeof(arr[i]));
		for(int i=0;i<105;i++)
			memset(visit[i],false,sizeof(visit[i]));
		vector<pair<int,int> > pos;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				cin>>arr[i][j];
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				if(arr[i][j] == 'A')
					pos.push_back(make_pair(i,j));
		bool flag;
		if(!(r*c>=10))
			flag = false;
		else
			for(int i=0;i<pos.size();i++){

				if(dfs(pos[i].x,pos[i].y,1)){

					flag = true;
					break;
				}
					else
					flag = false;
				}
		if(flag)
			pf("YES\n");
		else
			pf("NO\n");
	}
	return 0;
}
