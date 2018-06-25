#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string str="hello parth is beautiful";
	str += ' ';
	int l = str.length();
	int idxb = 0,idxe = 0,mx = -1,begin = 0;
	for(int i=0;i<l;i++){
		if(str[i] == ' '){
			if(i-1-begin>mx){
				mx = (i-begin-1);
				idxb = begin; 
				idxe = i-1;
			}
			begin = i+1;
		}
	}
	for(int i=idxb;i<=idxe;i++)
		cout << str[i];
	cout<<endl;
	return 0;
}
