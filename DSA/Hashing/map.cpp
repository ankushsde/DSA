#include <bits/stdc++.h>
using namespace std;
//using map 

int main() {

     int n ;
     cin>> n ;
     int arr[n];
     for (int i = 0 ; i< n ; i++){
      cin>> arr[i];
     }

     map<int, int > mpp;
     for(int i = 0 ; i<n; i++){
         mpp[arr[i]]++;
     }

     int number;
     cin>> number;

     int results = mpp[number];
     cout<< "Number occured : "<< results << endl;


    return 0;
}
