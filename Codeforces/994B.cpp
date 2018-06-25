#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;

bool cmp(pair<long long,int>a,pair<long long, int> b){

  return (a.S<b.S);
}

bool cmp1(vector<long long> a,vector<long long> b){
  return (a[1]<b[1]);
}

int main(){

  int n,k;
  long long temp;
  vector<pair<long long,int> > ans;
  scanf("%d%d",&n,&k);
  vector<long long> arr[n+5];
  /*
  position idx 0
  power idx 1
  coin idx 2
  */
  for(int i=0;i<n;i++){
    arr[i].push_back(i);
    scanf("%lld",&temp);
    arr[i].push_back(temp);
  }
  for(int i=0;i<n;i++){
    scanf("%lld",&temp);
    arr[i].push_back(temp);
  }
  vector<long long> temparr;
  long long sum = 0;
  long long coin, idx;
  //Sort wrt power
  sort(arr,arr+n,cmp1);
  ans.push_back({arr[0][2],arr[0][0]});
  //Least powerful
  if(k>0){
    temparr.push_back(arr[0][2]);
    sum=arr[0][2];
  }
  for(int i=1;i<n;i++){
    //Updating answer vector
    int coin = arr[i][2];
    int index = arr[i][0];
    ans.push_back({coin+sum,index});
    if(temparr.size() == k){

      long long small = temparr.back();
      if(small < coin){
        temparr.pop_back();
        sum-=small;
        temparr.push_back(coin);
        sum+=coin;
        sort(temparr.begin(),temparr.end());
        reverse(temparr.begin(),temparr.end());
      }
    }
    else if(temparr.size() < k){

      sum+=coin;
      temparr.push_back(coin);
      sort(temparr.begin(),temparr.end());
      reverse(temparr.begin(),temparr.end());
    }
  }
  sort(ans.begin(),ans.end(),cmp);
  for(int i=0;i<n;i++)
    printf("%lld ",ans[i].F);
  return 0;
}
