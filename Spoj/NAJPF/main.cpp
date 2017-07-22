#include <iostream>
using namespace std;


void LPS(string str,int m,int arr[]){

	int l = 0;
	int i = 1;
	arr[0] = 0;
	while(i<m){
	
		if(str[i] == str[l]){
		
			l++;
			arr[i] = l;
			i++;
		}
		else{
		
			if(l!=0){
			
				l = arr[l-1];
			}
			else{
			
				arr[i] = 0;
				i++;
			}
		}
	}
}

void KMP(string txt,string pat){

	int n = txt.length();
	int m = pat.length();
	
	int arr[m+5];
	LPS(pat,m,arr);
	int i = 0,j = 0;
	int found[10005];
	int p = 0;
	int count = 0;
	while(i<m){
	
		if(arr[i] == arr[j]){
			
			i++;
			j++;
			if(j == m){
			
				count++;
				found[p++] = i - M;
				j = arr[j-1];
			}
			else{
			
				if(j!=0){
				
					j = arr[j-1];
				}
				else{
				
					j = 0;
					i++;
				}
			}
		}
	}
	if(count){
	
		cout<<count<<endl;
		for(int i = 0;i<p;i++)
			cout<<found[p]<<" ";
		cout<<endl;
	}
	else
		cout<<"Not Found"<<endl;
}

int main(){

	int T;
	cin>>T;
	while(T--){
		
		string txt,pat;
		cin>>txt>>pat;
		KMP(txt,pat);
	}
	return 0;
}