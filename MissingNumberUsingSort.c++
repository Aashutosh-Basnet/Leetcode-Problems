#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
        int missingNumber(vector<int> &nums){
            sort(nums.begin(), nums.end());

            for (int i = 0 ; i < nums.size(); i++){
                if(nums[i-1] != nums[i] - 1){
                    return nums[i-1] + 1;
                }
            }
            if (nums[0] != 0 ) return 0;
            if (nums.back() != nums.size()) return nums.size();

            return -1;
        }
};