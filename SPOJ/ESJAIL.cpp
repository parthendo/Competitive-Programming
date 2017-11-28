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
#define endl printf("\n")
#define mp(x,y) make_pair(x,y)
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
map<int,int> key;

bool bfs(vector<int>G[],bool lock[],int n,int src){

	bool visit[n+5];
	ms(visit,false);
	queue<int> p,q;
	p.push(src);
	visit[src] = true;
	while(!p.empty()){

		while(!p.empty()){

            int u = p.front();
            p.pop();
            for(int i=0;i<G[u].size();i++){

                int v = G[u][i];
                if(!visit[v]){

                    visit[v] = true;
                    if(lock[v])                                           //If the door is locked
                        continue;
                    if(v == n)
                        return true;
                    if(key[v] && lock[key[v]]){

                        pf("%d\n",key[v]);
                        q.push(key[v]);
                        lock[v] = false;
                    }
                    p.push(v);
                }
            }
		}
		while(!q.empty()){

			int u = q.front();
			q.pop();
			if(visit[u] && !lock[u]){

			    pf("%d\n",u);
				p.push(u);
			}
		}
		endl;
	}
	return visit[n];
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
  	int n,k,m;
	while(1){
		key.clear();
  		sd(n);sd(k);sd(m);
		if(n == -1 && k == -1 && m == -1)
			break;
		vector<int> G[n+5];
		bool lock[n+5];
		ms(lock,false);
  		for(int i=0;i<k;i++){

    			int p,q;
    			sd(p);sd(q);
    			key[p] = q;
    			lock[q] = true;
  		}
		for(int i=0;i<m;i++){

			int p,q;
			sd(p);sd(q);
			G[p].push_back(q);
			G[q].push_back(p);
		}
		if(bfs(G,lock,n,1))
			pf("Y");
		else
			pf("N");
		endl;
	}
	return 0;
}
