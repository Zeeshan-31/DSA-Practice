#include<bits/stdc++.h>
using namespace std;

//*method 1 
// class Solution{
// public:
//   void rotate(vector<int>& nums,int k){
//     if(nums.empty()) return;
//     int n = nums.size();
//     k =k%n;
//     vector<int> temp(n);
//     for(int i = n-k;i<n;i++){
//       temp[i - n + k] = nums[i];
//     }
//     for (int i = n - k-1; i>= 0;i--){
//       temp[i + k] = nums[i];
//     }
//     nums = temp;
//   }
// };

// void Rotatetoleft(int arr[], int n, int k)
// {
//   if (n == 0)
//     return;
//   k = k % n;
//   if (k > n)
//     return;
//   int temp[k];
//   for (int i = 0; i < k; i++)
//   {
//     temp[i] = arr[i];
//   }
//   for (int i = 0; i < n - k; i++)
//   {
//     arr[i] = arr[i + k];
//   }
//   for (int i = n - k; i < n; i++)
//   {
//     arr[i] = temp[i - n + k];
//   }
// }
// int main()
// {
//   vector<int> nums = {1,2,3,4,5,6,7};
//   int k = 3;
//   Solution sol;
//   sol.rotate(nums,k);
//   cout << "After Rotating the elements to right " << endl;
//   for (int i = 0; i < nums.size(); i++)
//   {
//     cout << nums[i] << " ";
//   }
//   return 0;
// }

//*Method 2(O(1)-- space complexity)
class Solution{
public:
  void rotate(vector<int>& nums,int k){
    if(nums.empty()) return;
    int n = nums.size();
    k =k%n;
    if(k==0) return;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
  }
};



int main()
{
  vector<int> nums = {1,2,3,4,5,6,7};
  int k = 3;
  Solution sol;
  sol.rotate(nums,k);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  return 0;
}

void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
// Function to Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k)
{
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
