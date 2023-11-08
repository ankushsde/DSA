#include <bits/stdc++.h>
using namespace std;

//TC: 2n, O(N+N)
int main() {
     int arr[] = {3,2,2,1,5,4};
     int n = 6;

     int largest = arr[0];
     int slargest = -1;
     for(int i = 0; i<n ; i++){
     if(arr[i]>largest){
      largest = arr[i];
      }
     }
     for(int i = 0; i<n ; i++){
     if(arr[i]>slargest && arr[i] != largest){
      slargest = arr[i];
     }
     }
     cout<<"slargest : "<< slargest;
    return 0;
}
