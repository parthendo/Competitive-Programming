/*
 * 
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n,temp;
	vector<int> arr;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> temp;
		arr.push_back(temp);
	}
	vector<int> temp,ans;
	int temp_idx=-1,ans_idx,csum = 0,temp_sum = 0;
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			
			if(temp_sum > csum){
				
				if(temp.size() > ans.size()){
					
				}
				else if(temp.size() == ans.size()){
					
					
				}
			}
		}
		else if(flag){
			
			
		}
		else if(!flag){
			
		}
	}
	return 0;
}
