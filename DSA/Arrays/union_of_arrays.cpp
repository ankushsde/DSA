#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i = 0; i<n1;i++){
        st.insert(a[i]);
    }
    for(int i = 0; i< n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}
// Brute force 
// using set 
// TC: O(n1logn)+ O(n2logn)+O(n1+n2);
// SC : O(n1+n2): WC,+O(n1+n2):: To return a solution


#include <bits/stdc++.h>
using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n1, int n2) {
  int i = 0, j = 0; // pointers
  vector < int > unionArr; // Uninon vector
  while (i < n1 && j < n2) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        unionArr.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        unionArr.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n1) // IF any element left in arr1
  {
    if (unionArr.back() != arr1[i])
      unionArr.push_back(arr1[i]);
    i++;
  }
  while (j < n2) // If any elements left in arr2
  {
    if (unionArr.back() != arr2[j])
      unionArr.push_back(arr2[j]);
    j++;
  }
  return unionArr;
}

int main()

{
  int n1 = 10, n2 = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = FindUnion(arr1, arr2, n1, n2);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}

// Optimal Approach
// TC : O(n1+n2)
//SC: O(n1+n2)