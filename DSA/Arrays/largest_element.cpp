#include <bits/stdc++.h>
using namespace std;


int main() {
     int arr[] = {3,2,2,1,5,4};
     int n = 6;

     int largest = arr[0];
     for(int i = 0 ; i<n ; i++){
     if(arr[i]> largest){
      largest = arr[i];
      }
     }
     cout<<"largest number : "<<largest;

    return 0;
}