#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool ContainsDuplicate(vector<int> &nums){
    unordered_set<int> seen;

    for (int num : nums){
        if(seen.count(num)){
            return true;
        }
        seen.insert(num);
    }
    return false;
}

