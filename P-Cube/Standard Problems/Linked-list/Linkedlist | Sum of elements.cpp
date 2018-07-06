#include <iostream>
#include <list>
using namespace std;

int main(){
	
	int n;
	list<int> arr;
	while(1){
		cin >> n;
		if(n==-1)
			break;
	}
	int sum = 0;
	list<int> :: iterator it; 
	for(it = arr.begin();it!=arr.end();it++){
		sum+=(*it);
	}
	cout << sum << endl;
	return 0;
}
