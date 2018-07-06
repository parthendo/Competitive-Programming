#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<int> arr;
	int n;
	while(1){
		
		cin >> n;
		if(n == -1)
			break;
		arr.push_back(n);
	}
	list<int> :: iterator it,it1;
	it = arr.begin();
	it1 = arr.end();
	it1--;
	bool flag = true;
	while(it!=it1){
		
		if(*it != *it1){
			flag = 0;break;
		}
		it++;it1--;
	}
	if(flag)
		cout << "Pallindrome\n";
	else
		cout << "Not pallindrome\n";
	return 0;
}
