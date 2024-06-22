#include<iostream>
#include<unordered_map>
#include<vector>


using namespace std;

class solution{
    public:
     vector<int> twoSum(vector<int> &nums, int target){
        unordered_map<int, int> sum_of_number;

        for(int i = 0 ; i < nums.size() ; i++){
            int target_Comp = target - nums[i]; 
            if(sum_of_number.find(target_Comp) != sum_of_number.end()){
                return {sum_of_number[target_Comp], i};
            }
            sum_of_number[nums[i], i];
        }
        return{};
     }
};

int main(){

  vector<int> nums;
int n, target;

cout << "Enter the size of the vector: " << endl;

cin >> n;

nums.resize(n);

cout << "Enter the elements of the vector: " << endl;
for (int i = 0 ; i < n ; i++){
    cin >> nums[i];
}

cout << "enter the target: " << endl;
cin >> target;

solution Solution;
vector<int> result = Solution.twoSum(nums, target);
cout << "indexes: " << endl;
for(int i = 0 ; i < 2 ; i++)
cout << result[i] << " ";
cout << endl;
  


    return 0;
}