#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){

	int n,x,y;
	cin >> n;
	vector<pair<int,int> > arr;
	vector<pair<int,int> >::iterator it;
	for(int i=0;i<n;i++){

		cin >> x >> y;
		arr.push_back({x,y});
	}
	cin >> x >> y;
	int idx1, idx2;
	for(int i=0;i<n;i++){

		if(arr[i].first<=x)
			idx1 = i;
		if(arr[i].second>=y && arr[i].first<=y)
			idx2 = i;
	}
	//cout << idx1<<" "<<idx2<<endl;
	int a = arr[idx1].first;
	int b = arr[idx2].second;
	//cout << a << " " << b << endl;
	it = arr.begin();
	arr.erase(it+idx1,it+idx2+1);
	arr.insert(it+idx1,{a,b});
	n = arr.size();
	for(int i=0;i<n;i++){
		cout << "("<<arr[i].first<<","<<arr[i].second<<") ";
	}
	cout<<endl;
	return 0;
}