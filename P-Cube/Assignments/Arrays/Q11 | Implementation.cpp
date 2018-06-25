/*
 * SC = O(n)
 * TC = O(n)
 */ 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	long long n;
	cin >> n;
	vector<int> arr;
	while(n>0){
		arr.push_back(n%10);
		n/=10;
	}
	int l = arr.size();
	arr[0]+=1;
	int carry = 0;
	carry = arr[0]/10;
	arr[0] = arr[0]%10;
	for(int i=1;i<l;i++){
		arr[i]+=carry;
		carry = arr[i]/10;
		arr[i]%=10;	
	}
	if(carry == 1){
		
		arr.push_back(carry);
	}
	reverse(arr.begin(),arr.end());
	l = arr.size();
	for(int i=0;i<l;i++){
		cout<<arr[i];
	}
	cout<<endl;
	return 0;
}
