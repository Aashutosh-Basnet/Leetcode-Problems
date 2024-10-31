// this code access the unordered map once so maybe a little bit faster 

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int romanToInt(std::string s) {
    unordered_map<char, int> roman_to_int = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int prev_value = 0;

    for (char c : s) {
        int current_value = roman_to_int[c];
        
        if (prev_value < current_value) {
            total = total + current_value - 2 * prev_value;
        } else {
            total = total + current_value;
        }
        
        prev_value = current_value;
    }

    return total;
}

int main(){

    return 0;
}