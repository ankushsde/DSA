


#include <bits/stdc++.h>

using namespace std;

vector < int > findIntersection(int arr1[], int arr2[], int n1, int n2) {
  int i = 0, j = 0; // pointers
  vector < int > ans;
  while (i<n1 & j<n2){
   if(arr1[i]<arr2[j]){
   i++;
   }
   else if (arr2[j] < arr1[i]){
   j++;
   }
   else {
    ans.push_back(arr1[i]);
    i++;
    j++;
   }

  }
  return ans;
} 

int main()

{
  int n1 = 10, n2 = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Intersection = findIntersection(arr1, arr2, n1, n2);
  cout << "Intersection of arr1 and arr2 is  " << endl;
  for (auto & val: Intersection)
    cout << val << " ";
  return 0;
}

//OPtimal approach
//TC: O(n1+n2)
//SC: O(1)