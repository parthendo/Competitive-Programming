#include <iostream>
#include <list>
#include <climits>
using namespace std;

int main(){
	
	list<int> arr;
	int n;
	list<int> :: iterator it;
	while(1){
		
		cin >> n;
		if(n == -1)
			break;
		arr.push_back(n);
	}
	int mx = INT_MIN;
	for(it = arr.begin();it!=arr.end();it++){
		
		if(mx < (*it))
			mx = (*it);
	}
	cout << mx << endl;
	return 0;
}
