    #include <iostream>
    #define mod 1000000007
    using namespace std;
     
    void updateBIT(long int BITree[], int n, int index, long int val){
        
        index = index + 1;
        while (index <= n){
            BITree[index] = (val + BITree[index]);
            index = (index + (index & (-index)));
        }
        return;
    }
     
    long int *constructBITree(int n){
        long int *BITree = new long int[n+1];
        for (int i=1; i<=n; i++)
            BITree[i] = 0;
        return BITree;
    }
     
    long int getSum(long int BITree[], int index){
        long int sum = 0; 
        index = index + 1;
        while (index>0){
            sum = (sum + BITree[index]);
            index -= index & (-index);
        }
        return sum%mod;
    }
     
    void update(long int BITree[], int l, int r, int n, long int val){
        
        updateBIT(BITree, n, l, val);
        updateBIT(BITree, n, r+1, -val);
        return;
    }
     
    int main(){
        int T;
        cin>>T;
        while(T--){
        
            int q[100005][3];
            int n,m;
            scanf("%d%d",&n,&m);
            long int *BITree = constructBITree(m);
            long int *BITree2 = constructBITree(n);        
            
            for(int i=1;i<=m;i++)
                scanf("%d%d%d",&q[i][0],&q[i][1],&q[i][2]);
            
            for(int i=m;i>=1;i--)
                if(q[i][0] == 2)
                    update(BITree, q[i][1]-1, q[i][2]-1, m, 1);
            
            for(int i=m;i>=1;i--)
                if(q[i][0] == 2){
                    
                    long int val = getSum(BITree,i-1);
                    update(BITree, q[i][1]-1, q[i][2]-1, m, val);
                }
     
            for(int i=m;i>=1;i--)
                if(q[i][0] == 1){
                    
                    long int val = getSum(BITree,i-1);
                    update(BITree2,q[i][1]-1,q[i][2]-1,n,(val+1));
                }
            
            for(int i=1;i<=n;i++)
                cout<<(getSum(BITree2,i-1))<<" ";
            cout<<endl;
        }
        return 0;
    } 