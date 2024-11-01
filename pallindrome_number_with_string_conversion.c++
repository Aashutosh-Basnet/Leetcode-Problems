#include<iostream>
#include<string>

using namespace std;

class solution{
    public:
bool isPalindrome(int x) {
    string s = to_string(x);
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}
};

int main(){


    return 0;
}