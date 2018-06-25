#include <iostream>
using namespace std;

int main(){

	int m,n;
	cin >> m >> n;
	int arr[m+4][n+4];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin >> arr[i][j];
	/*	Percolate down
	 * 	If current cell == 0, for all 4 cells
	 * 							if val is 1, write 2 
	 *                          if val is 0, do nothing
	 * 	If current cell == 1, continue
	 * 	If current cell == 2, check value at i-1,j and j-1,i if 2, check i-2,j and i,j-2
	 * 							update 2s accordingly
	 * 	
	 */ 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j] == 0){
				if(i+1<n)
					arr[i+1][j] = 2;
				if(i-1>=0)
					arr[i-1][j] = 2;
				if(j+1<m)
					arr[i][j+1] = 2;
				if(j-1>=0)
					arr[i][j-1] = 2;
			}
		}
	}
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			cout << arr[i][j];
		}
		cout<<endl;
	}
}
