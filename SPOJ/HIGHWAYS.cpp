#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <climits>
#include <queue>
#include <algorithm>

using namespace std;

void dijkstra(vector<pair<int,int>>G[],vector<int> dist,int n,int src,int tar){
    
    priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    dist[src] = 0;
    while(!pq.empty()){
        
        int u = pq.top().second;
        pq.pop();
        
        vector<pair<int,int>> :: iterator it;
        for(it = G[u].begin();it!=G[u].end();++it){
            
            int v = (*it).first;
            int weight = (*it).second;
            if(dist[v] > dist[u]+weight){
                
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    if(dist[tar] == INT_MAX)
        printf("NONE\n");
    else
        printf("%d\n",dist[tar]);
}

int main(){
    
    int tt;
    scanf("%d",&tt);
    while(tt--){
        
        int n,m,src,tar;
        scanf("%d%d%d%d",&n,&m,&src,&tar);
        vector <pair<int,int>> G[n+5];
        vector <int> dist;
        
        for(int i=0;i<m;i++){
            
            int x,y,z;
            scanf("%d%d%d",&x,&y,&z);
            G[x-1].push_back({y-1,z});
            G[y-1].push_back({x-1,z});
        }
        for(int i=0;i<n;i++){
            
            dist.push_back(INT_MAX);
        }
        
        dijkstra(G,dist,n,src-1,tar-1);
    }
    return 0;
}