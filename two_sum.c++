// this is a problem where you find the indexes of two elements that add up to a target 

/*
 this is not so efficient way as we can use hashmaps for more efficient approach
*/


#include<iostream>
#include<vector>

using namespace std;

class solution{
    public:
    vector<int> twoSum(vector<int> &nums, int target){
        for (int i = 0 ; i < nums.size() - 1 ; i++){
        int targetComp = target - nums[i];
        for (int j = i+1 ; j < nums.size() ; j++){
            if(nums[j] == targetComp){
                vector<int> soln = {i, j};
                return soln;
            }
        }
        }
        return {};
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