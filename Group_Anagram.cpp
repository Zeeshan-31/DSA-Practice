#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs){
    // //Method 1 O(K.NLogN) sorting
    // map<string,vector<string>> anagram_groups;

    // for(auto it:strs){
    //   string original_str = it;
    //   string sorted_str = original_str;

    //   sort(sorted_str.begin(), sorted_str.end());

    //   anagram_groups[sorted_str].push_back(original_str);
    // }
    // vector<vector<string>> result;
    // for(auto const& pair: anagram_groups){
    //   result.push_back(pair.second);
    // }
    // return result;
    //Method 2 O(N.K) Count characters
    unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            string key = to_string(count[0]); //cannot use vector as key in c++
            for (int i = 0; i < 26; i++) {
                key += "," + to_string(count[i]);
            }
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
  }
};

int main() {
    Solution sol;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = sol.groupAnagrams(strs);

    // Print the result
    for (const auto& group : result) {
        cout << "[ ";
        for (const auto& s : group) {
            cout << s << " ";
        }
        cout << "]" << endl;
    }

    return 0;
  }
