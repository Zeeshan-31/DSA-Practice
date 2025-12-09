#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
      // //Brute Force T - O(n^2)
      //   int maxV= 0;
      //   for(int i=0;i<height.size();i++){
      //     for(int j=i+1;j<height.size();j++){
      //       maxV = max(maxV, min(height[i], height[j]) * (j - i));
      //     }
      //   }
      //   return maxV;

      //Two Pointer O(n)
      int maxV = 0;
        int r = height.size() - 1;
        int l = 0;
        while (l < r) {
            int b = min(height[l], height[r]);
            int a = r - l;
            int currentVolume = a * b;
            if (currentVolume > maxV) {
                maxV = currentVolume;
            }
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxV;
    }
};

int main(){
  vector<int> heights = {1,8,6,2,5,4,8,3,7};
  Solution Solution;
  int result = Solution.maxArea(heights);
  cout << result << endl;
}