#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <map>
 
typedef long long int ll;
 
using namespace std;
 
map<ll,ll> memory;
long long int val(ll);
int main(void)
{ 
	 ll n;
     while((scanf("%lld",&n))!= EOF)
     {
     	//memset(memory,-1,sizeof(memory));
     	memory[1]=1;
     	memory[2]=2;
     	memory[3]=3;
     	memory[4]=4;
     	memory[n]=val(n);
        cout<<memory[n]<<endl;
     }
     return 0;
}
ll val(ll n)
{
	if(n==0)
	return 0;
	else
	if(memory[n]==0)
	{
		memory[n]=max(n,val(floor(n/2))+val(floor(n/3))+val(floor(n/4)));
	}
	return memory[n];
} 