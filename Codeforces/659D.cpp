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
    cin>>n;
    pair<int ,int >arr[n+5];
    for(int i=0;i<n;i++){

	    int p,q;
	    cin>>arr[i].first>>arr[i].second;
    }
    int count = 0;
    string last,curr;
    for(int i=2;i<n;i++){

	    int x1,x2,x3,y1,y2,y3;
	    x1 = arr[i-2].first;
	    y1 = arr[i-2].second;
	    x2 = arr[i-1].first;
	    y2 = arr[i-1].second;
	    x3 = arr[i].first;
	    y3 = arr[i].second;
	    if(x1 == x2){

		    if(y2>y1){

			    last = "SN";
		    }
		    else
		    		last = "NS";
	    }
	    else{

		    if(x2>x1){

			    last = "WE";
		    }
		    else
		    		last = "EW";
	    }
	    if(x2 == x3){

		    if(y3>y2){

			    curr = "SN";
		    }
		    else
		    		curr = "NS";
	    }
	    else{

		    if(x3>x2){

			    curr = "WE";
		    }
		    else
		    		curr = "EW";
	    }
	    if((last == "NS" && curr == "WE")||(last == "EW" && curr == "NS") || (last == "SN" && curr == "EW") || (last == "WE" && curr == "SN"))
	    	count++;
    }
    cout<<count;
    return 0;
}
