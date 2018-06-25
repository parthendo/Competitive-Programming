/*
 * TC = O(N^2)
 * SC = O(N^2)
 * Sample Input: n = 3, m = 3
 * Sample Output: 6
 */ 
#include <iostream>
#include <cstring>
using namespace std;

long long arr[10000][10000];

int main(){
	long long n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			arr[i][j] = 0;
	arr[n-1][m-1] = 1;
	for(int i=n-1;i>=0;i--){
		for(int j=m-1;j>=0;j--){
			long long val = arr[i][j];
			if(i-1>=0)
				arr[i-1][j]+=val;
			if(j-1>=0)
				arr[i][j-1]+=val;
		}
	}/*
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << arr[i][j] << " ";
		}
		cout<<endl;
	}*/
	cout << arr[0][0] << endl;
	return 0;
}
