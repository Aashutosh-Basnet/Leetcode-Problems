#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool ContainsDuplicate(vector<int> &nums){
    unordered_map<int, int> freq;
    for (int num : nums){
        if(freq[num] > 0){
            return true;
        }
        freq[num]++;
    } 
    return false;
}

