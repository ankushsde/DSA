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

// TC:O(N)




#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++)
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;
}
int secondLargest(int arr[],int n)
{
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }

        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }
    return second_large;
}

int main() {
    int arr[]={1,2,4,7,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}

