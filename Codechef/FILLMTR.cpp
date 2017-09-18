    #include <bits/stdc++.h>
    using namespace std;
    #define x first
    #define y second
    map<pair<int,int>,int> check;
     
    bool isBipartiteUtil(vector<int>G[], int src,int N, int colorArr[])
    {
        colorArr[src] = 1;
        queue <int> q;
        q.push(src);
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (int v = 0; v < G[u].size(); ++v)
            {
     
                if (colorArr[G[u][v]] == -1)
                {
                    colorArr[G[u][v]] = 1 - colorArr[u];
                    q.push(G[u][v]);
                }
                else if (colorArr[G[u][v]] == colorArr[u]){
                    return false;
                }
            }
        }
        return true;
    }
     
    bool isBipartite(vector<int>G[],int N)
    {
        int colorArr[N];
        for (int i = 0; i < N; ++i)
            colorArr[i] = -1;
        for (int i = 0; i < N; i++)
          if (colorArr[i] == -1)
            if (isBipartiteUtil(G, i,N,colorArr) == false)
               return false;
     
         return true;
    }
         
    int main(){
            
        int T;
        cin>>T;
        while(T--){
                
            bool flag = true;
            int n,q;
            int pseudo_count = 0;
            check.clear();
            scanf("%d%d",&n,&q);
            vector<int> arr[5*n];
            int pseudo = n;
            for(int i=0;i<q;i++){
                    
                int X,Y,Z;
                scanf("%d%d%d",&X,&Y,&Z);
                pair<int,int> var = make_pair(min(X,Y),max(X,Y));
                    
                if(X == Y && Z!=0)
                    flag = false;
                    
                if(check[var] == 0){
                        
                    if(Z == 0){
                        
                        check[var] = -1;
                        arr[X-1].push_back(pseudo);
                        arr[pseudo].push_back(X-1);
                        arr[Y-1].push_back(pseudo);
                        arr[pseudo].push_back(Y-1);
                        pseudo++;
                        pseudo_count++;
                    }
                    else{
                        
                        check[var] = 1;
                        arr[X-1].push_back(Y-1);
                        arr[Y-1].push_back(X-1);
                    }
                }
                else{ 
                    if(check[var] != 0 && Z != check[var])
                        flag = false;
                }
            }
            if(flag){
                
                if(isBipartite(arr,n+pseudo_count) == true)
                    cout<<"yes\n";
                else
                    cout<<"no\n";
            }
            else
                cout<<"no\n";
        }
        return 0;
    }  