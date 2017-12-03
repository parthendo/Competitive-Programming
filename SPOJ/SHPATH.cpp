#include <bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pf(x) printf("%d",x)
#define pb(x) push_back(x)
#define x first
#define y second
vector<pair<int,int>> G[10005];

bool cmp(pair<string,int> a,pair<string,int> b){return (a.x<b.x);}

int main(){
	
	ios_base::synce_with_stdio(0);
	cin.tie(NULL);
	int tt;
	sd(tt);
	while(tt--){
		
		int n,q;
		sd(n);
		vector<pair<string,int>> name;
		for(int i=0;i<n;i++){
			
			string str;
			cin>>str;
			name.pb({name,i});
			int m;
			while(m--){
				
				int p,q;
				sd(p);sd(q);
				G[i].pb({p-1,q});
			}
		}
		sd(q);
		sort(name.begin(),name.end(),cmp);
		while(q--){
			
			string s1,s2;
			cin>>s1>>s2;
			
		}
	}
	return 0;
}