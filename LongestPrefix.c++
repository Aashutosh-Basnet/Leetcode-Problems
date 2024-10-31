#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        
        int min_len = strs[0].length();
        for (int i = 1; i < strs.size(); ++i) {
            if (strs[i].length() < min_len) {
                min_len = strs[i].length();
            }
        }
        
        string prefix = "";
        for (int i = 0; i < min_len; ++i) {
            char current_char = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != current_char) {
                    return prefix;
                }
            }
            prefix += current_char;
        }
        
        return prefix;
    }
};

int main(){


    return 0;
}