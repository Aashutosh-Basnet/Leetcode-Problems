// not as efficient as using string conversion

#include<iostream>


class Solution {
public:
bool isPalindrome(int x) {
    // here, we consider negative numbers as non-palindrome number
    if (x < 0) {
        return false;
    }

    //numbers ending with 0 are cancelled out as for it to be pallindrome it needs to start with 0
    if (x != 0 && x % 10 == 0) {
        return false;
    }
    
    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    
    // when the length is an odd number, we can get rid of the middle digit by reversedHalf / 10
    return x == reversedHalf || x == reversedHalf / 10;
}
};

int main(){



    return 0;
}
