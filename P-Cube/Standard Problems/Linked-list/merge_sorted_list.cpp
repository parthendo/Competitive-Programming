#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<int> arr,arr1,arr2;
	int n;
	list<int> :: iterator it,it1;
	while(1){
		
		cin >> n;
		if(n == -1)
			break;
		arr.push_back(n);
	}
	while(1){
		
		cin >> n;
		if(n == -1)
			break;
		arr1.push_back(n);
	}
	arr.sort();
	arr1.sort();
	it = arr.begin();
	it1 = arr1.begin();
	while(it!=arr.end() && it1!=arr1.end()){
		if(*it>*it1){
			arr2.push_back(*it1);
			it1++;
		}
		else{
			arr2.push_back(*it);
			it++;
		}
	}
	while(it!=arr.end()){
		arr2.push_back(*it);
		it++;
	}
	while(it1!=arr1.end()){
		arr2.push_back(*it1);
		it1++;
	}
	for(it = arr2.begin();it!=arr2.end();it++){
		cout << (*it) << " ";
	}
	cout << endl;
	return 0;
}
