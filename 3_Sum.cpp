#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      // //M-1 Hash Map T- O(n^2) S-O(n)
      //   set<vector<int>> unique_triplet;
      //   sort(nums.begin(),nums.end());
      //   for(int i = 0;i<nums.size();i++){
      //       unordered_set<int> seen;
      //       for(int j=i+1;j<nums.size();j++){
      //           int needed = -(nums[i]+nums[j]);
      //           if(seen.count(needed)){
      //               unique_triplet.insert({nums[i],nums[j],needed});
      //           }
      //           seen.insert(nums[j]);
      //       }
      //   }
      //   vector<vector<int>> result(unique_triplet.begin(),unique_triplet.end());
      //   return result;
      
      //M-2 Two Pointer O(n^2) S- O(1)
      vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                break; //if number is greater than 0 then it cannot become 0 by adding it to the other two larger positive number than its own
            }
            if(i>0 && nums[i] == nums[i-1]) continue;
            int low = i+1;
            int high = nums.size()-1 ;
            int target = -nums[i];
            while(low<high){
                int sum = nums[low]+nums[high];
                if(sum< target){
                    low++;
                }
                else if(sum>target){
                    high--;
                }
                else{
                    result.push_back({nums[i], nums[low],nums[high]});
                    
                    while(low<high && nums[low]== nums[low+1]) low++;
                    while (low < high && nums[high] == nums[high - 1]) high--;
                    low++;
                    high--;
                }
                
            }
            
        }
        return result;

    }
};

int main(){
  vector<int> nums = {-1,0,1,2,-1,-4};
  Solution Solution;
  vector<vector<int>> rs = Solution.threeSum(nums);
  for(const auto& triplet: rs){
    cout << "[ ";
    for(int num:triplet){
      cout << num << " ";
    }
    cout << "]" << endl;
  }
}