#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // //M-1 Brute Force
        // for(int j=0;j<numbers.size();j++){
        //     for(int i =j+1;i<numbers.size();i++){
        //         if(numbers[j]+numbers[i] == target){
        //             return {j+1,i+1};
        //         }
        //     }
        // }
        // return {};
        // //M-2 Two Pointer
        // int left =0;
        // int right = numbers.size() -1;
        // while(left<right){
        //     int sum = numbers[left]+numbers[right];
        //     if(sum == target){
        //         return {left+1,right+1};
        //     }
        //     else if(sum>target){
        //         right--;
        //     }
        //     else if(sum<target){
        //         left++;
        //     }
        // }
        // return {};

        //M-3 Hash map
        unordered_map<int, int> mp;
        for (int i = 0; i < numbers.size();i++){
            int tmp = target - numbers[i];
            if(mp.count(tmp)){
                return {mp[tmp], i + 1};
            }
            else{
                mp[numbers[i]] = i + 1;
            }

        }
        return {};
    }
};

int main(){
  vector<int> num = {1, 2, 3, 4};
  int target = 4;
  Solution Solution;
  vector<int> result = Solution.twoSum(num, target);
  for(auto it: result){
    cout << it << " ";
  }
}
