#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right && s[left] == s[right]) {
            char current_char = s[left];
            while (left <= right && s[left] == current_char) {left++;}
            while (left <= right && s[right] == current_char) {right--;}
        }

        return max(0, right - left + 1);
    }
};

int main() {
    string s = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbacccabbabccaccbacaaccacacccaccbbbacaabbccbbcbcbcacacccccccbcbbabccaacaabacbbaccccbabbcbccccaccacaccbcbbcbcccabaaaabbbbbbbbbbbbbbb";
    Solution sol;
    cout << sol.minimumLength(s) << endl;
    return 0;
}
