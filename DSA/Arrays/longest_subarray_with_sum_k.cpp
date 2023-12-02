//Brite force : TC : O(N3)
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
  int n = a.size();

  int len = 0 ;
  for ( int i = 0; i< n ; i++){
  for( int j = i; j<n; j++){
   long long sum = 0;
   for( int K = i; K<=j; K++){
    sum += a[K];
   }
   if(sum == k){
  len = max(len,j-i+1);
 }
  }
 }

return len;
}


int main() {
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

//TTTC:O(2N) 
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
int left = 0, right = 0 ;
int n = a.size();
long long sum = a[0];
int maxLen=0;


while(right<n){

 while( && sum>k){
 sum-=a[left];
 left++;
 }

 if(sum == k ) {
 maxLen= max(maxLen,right-left+1);
 }

 right++;
 if(right<n) sum += a[right];
}
 return maxLen;
}
int main() {
    vector<int> a = {1,2, 3,1,1,1,3,3};
    long long k = 6;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

