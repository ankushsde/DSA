#include <bits/stdc++.h>
using namespace std;
// Hashing // count frequency or occurence using hashing 

int main() {

        int n ;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n ; i++){
        cin >>arr[i];
        }

        int hash[13] = {0};
        for( int i = 0; i<n; i++){
           hash[arr[i]] += 1 ;

        }

        int number ;
        cin>> number;
        cout<< "repetetion of the number : "<< number << " is : " <<hash[number]<<endl;


    return 0;
}

// basic approach 

#include <bits/stdc++.h>
using namespace std;
// Count the number of occurrences of a number in an array

int printOccurence(int n , int arr[]){

    int cnt = 0;
    for (int i = 0 ; i < 5 ; i++){
      if(arr[i] == n){
      cnt++;
      }
    }
    return cnt;
}

int main() {

    int n ;
    cout<<"Enter a number : "<<endl;
    cin>> n ;
    int arr[5]={1,1,1,2,3};

    int result = printOccurence(n,arr);
    cout << "The number " << n << " appears " << result << " times in the array." << endl;

    return 0;
}
