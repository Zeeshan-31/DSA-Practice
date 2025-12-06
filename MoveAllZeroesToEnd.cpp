#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums){
  vector<int> temp;
  int n = nums.size();
  for (int i = 0; i < n;i++){
    if (nums[i] != 0){
      temp.push_back(nums[i]);
    }
  }
  for (int i = 0; i<n;i++){
    if(nums[i] == 0){
      temp.push_back(nums[i]);
    }
  }
  nums = temp;
}

int main(){
  vector<int> nums = {1, 0, 2, 3, 0, 4, 0, 1};
  solve(nums);
  for (int i = 0; i < nums.size(); i++){
    cout << nums[i] << " ";
  }
  return 0;
}