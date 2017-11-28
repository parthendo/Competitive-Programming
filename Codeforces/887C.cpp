#include <bits/stdc++.h>
using namespace std;
/*
Submitted by : Parth Trehan(markus__)
*/
//--------------------------
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ms(array,value) memset(array,value,sizeof(array))
#define iterate(it, s) for(auto it=s.begin(); it!=s.end(); it++)
#define bcnt __builtin_popcount
#define pb(x) push_back(x)
#define sc scanf
#define pf printf
#define F first
#define S second
#define line printf("\n")
//--------------------------
#define llu long long int unsigned
#define ll long long
#define lli long long int
//--------------------------
#define PI 3.14159265358979323846
#define mod 1000000007
//--------------------------
ll gcd(ll i, ll j){ll temp;if(i<j){temp=i;i=j;j=temp;}while(i%j!=0){
                   temp=i;i=j;j=temp%j;}return j;}
ll lcm(ll i, ll j){ll ans=(i*j);ans/=gcd(i, j);return ans;}
ll modpow(ll n, ll p){ll ans=1;while(p>0){if(p&1)ans=(ans*n)%mod;
                   n=(n*n)%mod;p=p/2;}return ans;}
//--------------------------

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int hori[20][4];
    int vert[20][4];
    int arr[30];
    for(int i=1;i<=24;i++)
    	cin>>arr[i];

    if(arr[13] == arr[14] && arr[14] == arr[15] && arr[15] == arr[16] &&
       arr[17] == arr[18] && arr[17] == arr[19] && arr[17] == arr[20])
	  {
		  if((arr[1] == arr[3] && arr[6] == arr[8] && arr[1] == arr[6]
		  && arr[5] == arr[7] && arr[10] == arr[12] && arr[7] == arr[10]
	       && arr[2] == arr[4] && arr[22] == arr[24] && arr[2] == arr[22]
	       && arr[21] == arr[23] && arr[9] == arr[11] && arr[11] == arr[21])||(
		  arr[1] == arr[3] && arr[21] == arr[23] && arr[1] == arr[23]
		  && arr[6] == arr[8] && arr[9] == arr[11] && arr[6] == arr[11]
	       && arr[2] == arr[4] && arr[5] == arr[7] && arr[2] == arr[7]
	       && arr[10] == arr[12] && arr[22] == arr[24] && arr[10] == arr[24])){
		  	cout<<"YES";
			return 0;
		}
	}
	else if(arr[1] == arr[2] && arr[1] == arr[3] && arr[1] == arr[4] &&
        arr[9] == arr[10] && arr[9] == arr[11] && arr[9] == arr[12]){

		 if((arr[13] == arr[14] && arr[7] == arr[8] && arr[13] == arr[8]
		 && arr[5] == arr[6] && arr[19] == arr[20] && arr[5] == arr[20]
		 && arr[17] == arr[18] && arr[23] == arr[24] && arr[18] == arr[24]
		 && arr[21] == arr[22] && arr[15] == arr[16] && arr[21] == arr[16])||(
		 arr[13] == arr[14] && arr[23] == arr[24] && arr[14] == arr[23]
		 && arr[5] == arr[6] && arr[15] == arr[16] && arr[16] == arr[6]
		 && arr[17] == arr[18] && arr[8] == arr[7] && arr[17] == arr[7]
		 && arr[21] == arr[22] && arr[19] == arr[20] && arr[19] == arr[21])){
		    cout<<"YES";
		    return 0;
	    }
	  }
	  else if(arr[5] == arr[6] && arr[5] == arr[7] && arr[5] == arr[8] &&
   	  arr[21] == arr[22] && arr[21] == arr[23] && arr[21] == arr[24]){

   		if((arr[20] == arr[18] && arr[4] == arr[3] && arr[20] == arr[4]
   		&& arr[2] == arr[1] && arr[14] == arr[16] && arr[2] == arr[16]
   		&& arr[13] == arr[15] && arr[9] == arr[10] && arr[10] == arr[13]
   		&& arr[11] == arr[12] && arr[19] == arr[17] && arr[12] == arr[17])||(
   		arr[20] == arr[18] && arr[9] == arr[10] && arr[20] == arr[10]
   		&& arr[11] == arr[12] && arr[14] == arr[16] && arr[16] == arr[12]
   		&& arr[13] == arr[15] && arr[4] == arr[3] && arr[3] == arr[13]
   		&& arr[2] == arr[1] && arr[19] == arr[17] && arr[19] == arr[2])){
   		   cout<<"YES";
   		   return 0;
   	   }
   	 }
    cout<<"NO";
    return 0;
}
