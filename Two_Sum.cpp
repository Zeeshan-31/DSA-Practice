#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); i++) {
            int current_num = nums[i];
            // curr + compl =target
            int complement = target - current_num;
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            } else {
                num_map[current_num] = i; // update current_num in hash map
            }
        }
        return {};
    }
};
// time :O(n)
// space: O(n)

int main(){
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 5, 4};
  int target = 7;
  Solution Solution;
  vector<int> result = Solution.twoSum(nums, target);
  for(auto it: result){
    cout << it << endl;
  }
}