#include <iostream>
#include <vector>
#include <algorithm>  // for reverse
using namespace std;

class Solution {
public:
    void next_permutation(vector<int>& a) {
        int pivot = -1, n = a.size();

        // Step 1: Find pivot
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < a[i + 1]) {
                pivot = i;
                break;
            }
        }

        // Step 2: If no pivot, reverse entire array
        if (pivot == -1) {
            reverse(a.begin(), a.end());
            return;
        }

        // Step 3: Find element greater than pivot from right
        for (int i = n - 1; i > pivot; i--) {
            if (a[i] > a[pivot]) {
                swap(a[i], a[pivot]);
                break;
            }
        }

        // Step 4: Reverse suffix
        int i = pivot + 1, j = n - 1;
        while (i < j) {   // ✅ corrected condition
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
};

int main() {
    vector<int> a = {1, 2, 3};
    Solution s;
    s.next_permutation(a);
    for (int x : a) cout << x << " ";
    return 0;
}
