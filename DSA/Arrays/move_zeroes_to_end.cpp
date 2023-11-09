//brute force
#include<bits/stdc++.h>
using namespace std;

int moveZeroes(int arr[], int n){

vector<int> temp;
 for(int i = 0; i<n;i++){
  if(arr[i]!=0){
    temp.push_back(arr[i]);
  }
 }
 int nz=temp.size();
 for(int i = 0; i< nz; i++){
  arr[i]=temp[i];
 }
 for(int i = nz; i<n;i++){
 arr[i]=0;
 }
}

int main() {

  int n ;
  cin >> n ;
  int arr[n];
  for (int i = 0 ; i< n ; i++){
    cin >> arr[i];
  }

  moveZeroes(arr,n);
  for(int i = 0; i<n;i++){
  cout<<arr[i]<<" ";
  }
}
// TC: O(N)+O(X)+O(N-X)
// sc: O(X)

// Optimal approach , TC : O(N)
#include<bits/stdc++.h>
using namespace std;

int moveZeroes(int arr[], int n){
 int j = -1;
 for (int i=0; i<n; i++){
  if(arr[i]== 0){
   j = i;
   break;
  }
 }
 if(j== -1) { cout<<"No zeroes present"<<endl;}
 for(int i=j+1; i<n;i++){
   if(arr[i]!=0){
    swap(arr[i],arr[j]);
    j++;
   }
  }
 }

int main() {

  int n ;
  cin >> n ;
  int arr[n];
  for (int i = 0 ; i< n ; i++){
    cin >> arr[i];
  }

  moveZeroes(arr,n);
  for(int i = 0; i<n;i++){
  cout<<arr[i]<<" ";
  }

}



