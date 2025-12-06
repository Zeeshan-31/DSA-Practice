#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector <int> &nums){
  int pn =0;
  for(int i=1;i<nums.size();i++){
    if(nums[i]!=nums[pn]){
      pn++;
      nums[pn] = nums[i];
    }
  }
  return pn+1;
}

int main(){
  vector<int> nums = {1, 1, 2};
  int result = removeDuplicates(nums);
  cout << result;

}