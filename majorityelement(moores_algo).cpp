/*find the number which comes more than n/2 times
using moore's algorithm O(n)*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, candidate = 0;

        // Step 1: Find a candidate using Moore's Voting Algorithm
        for (int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                candidate = nums[i];
            }
            if (nums[i] == candidate) {
                freq++;
            } else {
                freq--;
            }
        }

        // Step 2: Verify the candidate to ensure it's a majority element
        freq = 0;  // Reset frequency for validation
        for (int num : nums) {
            if (num == candidate) {
                freq++;
            }
        }

        if (freq > nums.size() / 2) {
            return candidate;
        }

        return -1;  // No majority element
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 8, 8, 8, 8, 8};
    Solution a;
    cout << a.majorityElement(nums) << endl;
    return 0;
}
