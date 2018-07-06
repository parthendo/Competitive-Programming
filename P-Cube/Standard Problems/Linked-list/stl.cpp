#include <iostream>
#include <list>
using namespace std;

int main(){

	list <int> qqlist;
	qqlist.push_back(10);
	qqlist.push_back(40);
	qqlist.push_back(70);
	qqlist.push_front(5);
	qqlist.push_back(90);
	cout << qqlist.front() << endl;
	cout << qqlist.back() << endl;
	qqlist.pop_front();
	qqlist.pop_back();
	qqlist.reverse();
	qqlist.sort();
	list<int> :: iterator it;
	for(it = qqlist.begin();it!=qqlist.end();it++){
		cout << (*it) << " ";
	}
	cout << endl;
	return 0;
}
