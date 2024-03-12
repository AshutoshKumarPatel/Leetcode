#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> cCount;
        string ans = "";
        for (char c : order) {cCount[c] = 0;}
        for (char c : s) {
            if (cCount.find(c) != cCount.end()) {cCount[c]++;}
        }
        
        for (char c : order) {ans.append(cCount[c], c);}
        
        for (char c : s) {
            if (cCount.find(c) == cCount.end()) {ans.push_back(c);}
        }
        
        return ans;
    }
};

int main() {
    string order = "cba";
    string s = "abcd";
    Solution sol;
    cout << sol.customSortString(order, s) << endl;
    return 0;
}
