#include<string>
#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    vector<pair<long int,string> >v[n+5];
    for(int i=0;i<n;i++)
    {
        string name;
        long int t;
        long int p;
        cin>>name>>t>>p;
        v[t].push_back(make_pair(p,name));
    }
    for(int i=1;i<=m;i++)
    {
	    int l = v[i].size();
	   if(l == 0)
	    	continue;
	   else if(l == 2){

		   cout<<v[i][l-1].second<<" "<<v[i][l-2].second<<endl;
	   }
	   else{

        	sort(v[i].begin(),v[i].end());
        	if(v[i][l-3].first == v[i][l-2].first)
        		cout<<"?"<<endl;
        	else
        		cout<<v[i][l-1].second<<" "<<v[i][l-2].second<<endl;
		}
    }
    return 0;
}
