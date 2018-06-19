/*
 * Case 1: 4 6
		   3 0
		   2 1
           3 2
           2 3
           1 2
           0 5
   Answer: 5
 * NOTES: Go Diagonally 
 */
#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

int dir[10][2] = {{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};

int steps(vector<pair<int,int> > arr,int size){
  int l = arr.size();
  int dist = 0;
  for(int i=1;i<l;i++){
    int srcx = arr[i-1].first;  int srcy = arr[i-1].second;
    //cout << "src => "<<srcx<<" "<<srcy<<endl;
    int destx = arr[i].first;   int desty = arr[i].second;
    //cout << "dest => "<<destx<<" "<<desty<<endl;
    while(1){
      if(srcx == destx && srcy == desty)
		break;
      int xd,yd,tempdist,tempx,tempy;
      float mini = 9999.0f;
      for(int j=0;j<8;j++){
        xd = srcx + dir[j][0];
        yd = srcy + dir[j][1];
        if(xd>=0 && xd<size && yd>=0 && yd<size){
          if(xd == destx && yd == desty){
            tempx = xd, tempy = yd;
            break;
          }
          else{
            tempdist = sqrt((float)pow(destx-xd,2)+pow(desty-yd,2));
            if(tempdist<mini){
              mini = tempdist;
              tempx = xd,tempy = yd;
            }
          }
        }
      }
      dist++,srcx = tempx,srcy = tempy;
      //cout << "temp => "<<srcx<<" "<<srcy<<endl;
    }
  }
  return dist;
}

int main(){
 int N,n,x,y;
 vector<pair<int,int> > arr;
 cin >> N >> n;
 for(int i=0;i<n;i++){
   cin >> x >> y;
   arr.push_back({x,y});
 }
 cout << steps(arr,N) << endl;
 return 0;
}
