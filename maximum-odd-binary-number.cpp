#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        unordered_map<char, int> cCount;
        string ans;
        for (char c : s) {cCount[c]++;}
        int count1 = cCount['1'];
        int count0 = cCount['0'];

        for (int i = 0; i < count1 - 1; i++) {ans.push_back('1');}
        for (int i = 0; i < count0; i++) {ans.push_back('0');}
        ans.push_back('1');

        return ans;
    }
};


int main() {
    string s = "0110";
    Solution sol;
    cout << sol.maximumOddBinaryNumber(s) << endl;
    return 0;
}