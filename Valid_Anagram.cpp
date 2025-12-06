#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
          return false;
        }
        map <char,int> char_s;
        map <char,int> char_t;
        for(int i= 0; i<s.size();i++){
            char_s[s[i]]++;
            char_t[t[i]]++;
        }
        return char_s == char_t;
    }
};
int main(){
  string s = "racecar", t = "catrace";
  Solution Solution;
  bool result = Solution.isAnagram(s, t);
  cout << (result? "true" : "false") << endl;
}