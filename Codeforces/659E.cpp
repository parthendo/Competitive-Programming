#include<string>
#include<vector>
#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

set<int> ans;
void dfs(vector<int> arr[],bool visit[],int src){

	visit[src] = true;
	ans.insert(src);
	int l = arr[src].size();
	for(int i=0;i<l;i++){
		if(!visit[arr[src][i]]){

			dfs(arr,visit,arr[src][i]);
		}
	}
}
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    vector<int>arr[n+5];
    for(int i=0;i<m;i++){

	    int p,q;
	    cin>>p>>q;
	    p--;q--;
	    arr[p].push_back(q);
	    arr[q].push_back(p);
    }
    bool visit[n+5];
    int x = 0;
    for(int i=0;i<n;i++){

	    ans.clear();
	    if(!visit[i])
	    		dfs(arr,visit,i);
	    long int fact = 0;
	    set<int> ::iterator it;
	    for(it = ans.begin();it!=ans.end();++it){

		    fact+=arr[(*it)].size();
	    }
	    fact/=2;
	    if(fact == ans.size()-1)
	    		x++;
	}
    cout<<x;
    return 0;
}
