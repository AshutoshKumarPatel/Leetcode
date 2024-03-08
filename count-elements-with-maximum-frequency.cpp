#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> nCount;
        int ans = 0;
        int cMax = 0;
        for (int n : nums) {nCount[n]++;}
        set<int> uSet (nums.begin(), nums.end());
        vector<int> uVec (uSet.begin(), uSet.end());
        for (int n : uVec) {
            if (nCount[n] > cMax) {
                cMax = nCount[n];
                ans = nCount[n];
            }
            else if (nCount[n] == cMax) {ans += nCount[n];}
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1,2,2,3,1,4};
    Solution sol;
    cout << sol.maxFrequencyElements(nums) << endl;
    return 0;
}