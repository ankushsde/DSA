//Brute force

#include <bits/stdc++.h>
using namespace std;

int missingNumber( vector <int> &a, int N) {
   for(int i = 1; i<=N; i++){

   int flag = 0;
   for(int j = 0; j< N-1; j++){
   if(a[j]==i){
   flag = 1;
   break;
   }
   }
   //check if the element is missing
   //i.e flag = 0
   if(flag==0) return i;
   }
   return -1;
}

int main()

{
  int N =5;
  vector <int> a = {1, 2, 4, 5};
  int ans = missingNumber(a,N);
  cout<<"No."<<ans<<endl;

  return 0;
}
//TC: O(N*W) : O(N2)
//sc:O(N)

//Optimal Force using summation and XOR


#include <bits/stdc++.h>
using namespace std;

int missingNumber( vector <int> &a, int N) {
     int xor1=0; int xor2=0;
     for(int i = 0; i<N-1;i++){
     xor2=xor2 ^ a[i];
     xor1=xor1 ^ (i+1);
     }
     xor1=xor1 ^ N;
     return xor1^xor2;
}

int main()

{
  int N =5;
  vector <int> a = {1, 2, 4, 5};
  int ans = missingNumber(a,N);
  cout<<"No."<<ans<<endl;

  return 0;
}

// TC: O(N)
// SC:O(1)




#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
