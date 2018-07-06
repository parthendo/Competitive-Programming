#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> arr;
	int n;
	list<int> :: iterator it = arr.begin();
	while(1){
		
		cin >> n;
		if(n == -1)
			break;
		arr.push_back(n);
	}
	arr.sort();
	arr.unique();
	for(it = arr.begin();it!=arr.end();it++){
		cout << (*it) << " ";
	}
	cout << endl;
	return 0;
}
