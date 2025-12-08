#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  vector<int> freqelement(vector<int> &nums,int k) {
    unordered_map<int, int> count;
    vector<vector<int>> freq(nums.size() + 1);
    for(int n: nums){
      count[n] = 1 + count[n];
    }
    for(const auto& entry: count){
      freq[entry.second].push_back(entry.first);
    }
    vector<int> res;
    for (int i = freq.size() - 1; i >= 0;i--){
      for(int n:freq[i]){
        res.push_back(n);
        if(res.size() == k){
          return res;
        }
      }
    }
    return res;
  }
};

int main(){
  vector<int> nums = {1,2,1,2,1,2,3,1,3,2};
  int k = 2;
  Solution Solution;
  vector<int> result = Solution.freqelement(nums, k);
  for(const auto el : result){
    cout << el << endl;

  }
}