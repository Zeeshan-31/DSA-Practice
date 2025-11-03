#include<bits/stdc++.h>
using namespace std;
// todo: Finding Largest Element In array

// //*Brute Force Approach
// //! Iostream lib doesn't include vector lib so use bits/stdc++.h

// int sortArr(vector <int> & arr){
//   sort(arr.begin(), arr.end());
//   return arr[arr.size() - 1];
// }

// int main(){
//   vector<int> arr1 = {2, 5, 4, 16, 75, 3, 9};
//   cout << sortArr(arr1);
// }

//*Recursive Approach

int main(){
  vector<int> arr1 = {2, 5, 4, 16, 75, 3, 9};
  int max = 0;
  for (int i = 1; i < arr1.size(); i++){
    if(arr1[i]> arr1[max]){
      max = i;
    }
  }
  cout << arr1[max];
}