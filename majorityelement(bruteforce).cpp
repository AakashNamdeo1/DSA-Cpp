//Find the number which comes more than n/2 times
//brute force approach

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution { // Class name should start with an uppercase letter as a convention
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int val : nums) {
            int freq = 0;
            for (int el : nums) {
                if (el == val) {
                    freq++;
                }
            }
            if (freq > n / 2) {
                return val; // Majority element found
            }
        }
        return -1; // No majority element
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 8, 8, 8, 8, 8}; // Corrected declaration of vector
    Solution a;
    cout << a.majorityElement(nums) << endl; // Correctly printing the result
    return 0;
}
