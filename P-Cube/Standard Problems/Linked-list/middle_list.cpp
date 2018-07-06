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
	n = arr.size();
	n/=2;
	while(n-- >= 0)
		it++;
	cout << *it << endl;
	return 0;
}
