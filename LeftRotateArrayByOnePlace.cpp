#include<bits/stdc++.h>
using namespace std;

// //*Brute Force
// class Solution{
// public:
//   void rotate(int arr[],int n){
//     int temp[n];
//     for (int i = 1; i < n;i++){
//       temp[i - 1] = arr[i];
//     }
//     temp[n - 1] = arr[0];
//     for (int i = 0; i < n;i++){
//       cout << temp[i] << " ";
//     }
//     cout << endl;
//   }
// };

// int main(){
//   int arr[] = {1, 2, 3, 4, 5, 6};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   Solution sol;
//   cout << "left rotated array by one place: ";
//   sol.rotate(arr, n);
//   return 0;
// }

//*Optimal approach

class Solution{
public:
  void rotate(int arr[],int n){
    int temp = arr[0];
    for (int i = 0; i < n-1;i++){
      arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n;i++){
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main(){
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  Solution sol;
  cout << "left rotated array by one place: ";
  sol.rotate(arr, n);
  return 0;
}