#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#define ll long long int

ll sod(ll n){

	ll sum = 0;
	for(ll i=n;i>0;i/=10)
		sum+=(i%10);
	return sum;
}

int main(){

	ll n;
	cin>>n;
	ll ans = -1;
	set<long int> arr;

	if(n%2!=0){

		ll p = (n/10);
		if(p%2==0)
			p--;
		p*=10;
		for(int i=0;i<=100;i++){

			if(p+i+sod(p+i) == n){

				arr.insert(p+i);
			}
			if(abs(p-i)+sod(abs(p-i)) == n)
				arr.insert(abs(p-i));
		}
	}
	else{

		ll p = (n/10);
		if(p%2!=0)
			p--;
		p*=10;
		for(int i=0;i<=100;i++){

			if(p+i+sod(p+i) == n){

				arr.insert(p+i);
			}
			if(abs(p-i)+sod(abs(p-i)) == n)
				arr.insert(abs(p-i));
		}
	}
	cout<<arr.size()<<endl;
	set <long int> :: iterator i;
	for(i=arr.begin();i!=arr.end();++i)
		cout<<*(i)<<endl;
	return 0;
}
