#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  bool hasDuplicate(vector <int> &nums){
  // //time complexity(O(n^2)) // not good
  //   for(int i = 0; i < nums.size();i++){
  //     for (int pn = i + 1; pn < nums.size();pn++){
  //       if (nums[pn] == nums[i])
  //       {
  //         return true;
  //       }
  //     }
  // //time complexity (O(n)) HASh SET
  //   set <int> new_arr;
  //   for (int i = 0; i < nums.size();i++){
  //     new_arr.insert(nums[i]);
  //   }
  //   return new_arr.size() < nums.size();
  //time complexity (O(n)) HASH MAP
    unordered_map<int, int> seen;
    for(int num:nums){
      if(seen[num]>=1)
        return true;
      seen[num]++;
    }
    return false;
  }
};

int main(){
  vector<int> nums = {1,2,1,4};
  Solution Solution;
  bool result = Solution.hasDuplicate(nums);
  cout << "has duplicates: " << (result ? "true" : "false") << endl;
  return 0;
}