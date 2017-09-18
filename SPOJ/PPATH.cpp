#include <bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pf(x) printf("%d",x)
#define pb(x) push_back(x)
#define x first
#define y second
vector<int> G[10000];

void Seive(bool seive[]){
	
	for(int i=4;i<=10000;i+=2)
		seive[i] = true;
	for(int i=3;i<=10000;i+=2){
		
		if(!seive[i])
		for(int j = 2*i;j<=10000;j+=i)
			seive[j] = true;
	}
}

int bfs(int src,int dest){
	
	if(src == dest)
		return 0;
	bool visit[10000];
	memset(visit,false,sizeof(visit));
	queue<pair<int,int>> pq;
	pq.push({src,0});
	while(!pq.empty()){
		
		pair<int,int> t = pq.front();
		pq.pop();
		vector<int> :: iterator it;
		for(it=G[t.x].begin();it!=G[t.x].end();++it){
			
			if(!visit[*it]){
				
			//	cout<<t.x<<" "<<*it<<" "<<t.y<<endl;
				visit[*it] = true;
				if(*it == dest)
					return t.y+1;
				pq.push({*it,t.y+1});
			}
		}
	}
	return -1;
}

int main(){
	
	bool seive[10004];
	memset(seive,false,sizeof(seive));
	Seive(seive);
	vector<int> primes;
	for(int i=1001;i<10000;i++){
		
		if(!seive[i])
			primes.pb(i);
	}
	for(int i=0;i<primes.size();i++){
		
		for(int j=i+1;j<primes.size();j++){
			
			string s1 = to_string(primes[i]);
			string s2 = to_string(primes[j]);
			int count = 0;
			for(int k=0;k<4;k++){
			
				if(s1[k] == s2[k]){
					
					count++;
				}
			}
			if(count == 3){
				
				//cout<<primes[i]<<" "<<primes[j]<<endl;
				G[primes[i]].push_back(primes[j]);
				G[primes[j]].push_back(primes[i]);
			}
		}
	}
	int tt;
	sd(tt);
	while(tt--){
		
		int p,q;
		sd(p);sd(q);
		int x = bfs(p,q);
		if(x == -1)
			printf("Impossible");
		else
			pf(x);
		printf("\n");
	}
	return 0;
}