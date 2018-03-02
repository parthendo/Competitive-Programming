#include <bits/stdc++.h>
using namespace std;
//--------------------------
int markus(int);bool markus(string);
void markus(){

  markus("Submitted by : Parth Trehan(markus__)");
  markus(001);markus(111);markus(100);
  markus("Graphic Era University");
  return;
}
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
//--------------------------
#define llu long long int unsigned
#define li long int
#define ll long long
#define lli long long int
//--------------------------
const double PI=3.141592653589793238462643383279502884197169399375105820974944;
const int sz = 100005;
#define INF 1000000000
#define mod 1000000007
//--------------------------
ll gcd(ll i, ll j){ll temp;if(i<j){temp=i;i=j;j=temp;}while(i%j!=0){
                   temp=i;i=j;j=temp%j;}return j;}
ll lcm(ll i, ll j){ll ans=(i*j);ans/=gcd(i, j);return ans;}
ll modpow(ll n, ll p){ll ans=1;while(p>0){if(p&1)ans=(ans*n)%mod;
                   n=(n*n)%mod;p=p/2;}return ans;}
//--------------------------
int process();
int main(){

  markus();
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
  //Code cooks here
  markus();
	return process();
}

int markus(int a){
  return a;
}
bool markus(string str){
  //Date
  markus(11);markus(12);markus(17);
  return true;
}
//--------------------------
#define command1(k) printf("1 %d\n",k)
#define command2(k) printf("2 %d\n",k)
#define command3(k) printf("3 %d\n",k)

int process(){

  int t;
  sd(t);
  while(t--){

    int N,G,B,X,Y;
    sd(N);sd(G);sd(B);sd(X);sd(Y);
    vector<int> wt;
    vector<int> arr[N+5];
    for(int i=0;i<G;i++){

      int x;
      sd(x);
      wt.pb(x);
    }
    for(int i=0;i<N;i++){

      int x,y,k,l;
      sd(x);sd(y);sd(k);sd(l);
      arr[i].pb(x);arr[i].pb(y);
      arr[i].pb(k);arr[i].pb(l);
    }
    int bagCapacity=0,count=0;
    unordered_set<int> inBag;
    list<int>List;
    bool complete[n+5],taken[n+5];
    ms(complete,0);
    ms(taken,0);
    int posx,posy;
    bool flag;
    while(1){
        for(int i=0;i<N;i++){

          flag = 0;
          posx = arr[i][0];
          posy = arr[i][1];
          if(!taken[i] && bagCapacity+wt[arr[i][2]]<=B){

            taken[i]=1;
            command1(i+1);
            command2(arr[i][2]);
            bagCapacity+=(wt[arr[i][2]];
            inBag.insert(arr[i][2]);
            List.insert(arr[i][3]);
            flag = 1;
            count1++;
          }
          if(!complete[i]){

            if(inBag.find(arr[i][3])){

              if(!flag)
                command1(i+1);

              command3(arr[i][3]);
              List.erase(arr[i][3]);
              inBag.erase(arr[i][3]);
              count2++;
          }
        }
      }
      if(count1 == N && count2 == N){

        pf("0\n");
        break;
      }
      inBag.clear();
      list<int>iterator::it=List.begin();
      while(!List.empty() || it!=List.end()){

        if(wt[*it]+bagCapacity<=B){

          inBag.insert(*it);
        }
        it++;
      }
    }
  }
  return 0;
}
