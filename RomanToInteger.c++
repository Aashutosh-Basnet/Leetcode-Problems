// this code access the unordered map twice so maybe a little bit slower 

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman_to_integer = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int num = 0;
    for(int i = 0 ; i < s.length(); i++){
        if(i+1 < s.length() && roman_to_integer[s[i]] < roman_to_integer[s[i+1]]){
            num += (roman_to_integer[s[i+1]] - roman_to_integer[s[i]]);
            i++;
        } else {
            num += roman_to_integer[s[i]];
        } 
    }
    return num;
}  

int main(){

    return 0;
}
