/*
 * Problem Statement: Find prime factors of a number
 */
 #include <iostream>
 #include <cmath>
 using namespace std;

 void PrimeFactorization(int n){

   int l = sqrt(n),count = 0;
   while(n%2 == 0){
     count++;
     n/=2;
     if(n%2 != 0)
      cout<<"2^("<<count<<") ";
   }
   for(int i=3;i<=l;i+=2){
     count = 0;
     while(n%i == 0){
       count++;
       n/=i;
       if(n%i!=0)
        cout<<i<<"^("<<count<<") ";
     }
   }
   if(n>1)
    cout<<n<<"^(1)";
 }

 int main(){

   int n;
   cout << "Enter the number\n";
   cin >> n;
   PrimeFactorization(n);
   cout << endl;
   return 0;
 }
