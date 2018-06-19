/*
 *  Problem Statement: Find the machine epsilon for the given machine
 *
 *  SC: O(1)
 *  TC: O(log n)
 */
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

double machineepsilon(double n){

  double temp = n;
  while(1+n != 1){

    temp = n;
    n/=2;
  }
  return temp;
}

int main(){

  double n = 0.5;
  cout << "Machine Epsilon: "<< fixed << setprecision(20) << machineepsilon(n) << endl;
  return 0;
}
