#include <bits/stdc++.h>
using namespace std;

int vertex;

void DFS(list <int> *adj,int visit[],int i){
    
    visit[i] = 1;
    ++vertex;
    list <int> :: iterator it;
    for(it = adj[i].begin();it!=adj[i].end();++it){
        
        if(visit[*it] == 0){
            
            visit[(*it)] = 1;
            DFS(adj,visit,*it);
        }
    }
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int visit[100050];
    list <int> *adjlist;
    
    long long int N,P,u,v;
    long long int var=0,ans=0;
    cin>>N>>P;
    
    adjlist = new list <int>[N+5];
    vector <int> vec;
    for(int i=0;i<P;++i){
        
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    if(N == 1)
    {
         cout<<"0\n";
        return 0;
    }
    else{
        
        for(int i=0;i<N;++i){
        
         visit[i] = 0;
        }
        for(int i=0;i<N;++i){
        
            if(visit[i] == 0){
            
                vertex = 0;
                DFS(adjlist,visit,i);
                vec.push_back(vertex);
            }
        }
        vector <int> ::iterator iit;
        ans = (N*(N-1))/2;
        for(iit = vec.begin();iit!=vec.end();++iit){
        
            var = var + ((*iit)*((*iit)-1))/2;
        }
        cout<<ans-var<<endl;
    }
    return 0;
}