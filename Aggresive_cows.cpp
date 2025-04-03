#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if it is possible to place all 'c' cows in the stalls
// such that the minimum distance between any two cows is at least minAllowedDist
bool ispossible(vector<int>& arr, int n, int c, int minAllowedDist) {
    int cows = 1; // Start by placing the first cow in the first stall
    int laststallpos = arr[0]; // Track the position of the last placed cow

    for (int i = 1; i < n; i++) {
        // Check if the current stall is at least minAllowedDist away from the last stall
        if (arr[i] - laststallpos >= minAllowedDist) {
            cows++; // Place a cow in the current stall
            laststallpos = arr[i]; // Update the position of the last placed cow
        }
        // If all cows have been successfully placed, return true
        if (cows == c) {
            return true;
        }
    }
    // Return false if it's not possible to place all cows
    return false;
}

// Function to find the maximum minimum distance possible between any two cows
int getDistance(vector<int>& arr, int n, int c) {
    // Sort the stall positions to enable binary search
    sort(arr.begin(), arr.end());

    int st = 1; // Minimum possible distance
    int end = arr[n - 1] - arr[0]; // Maximum possible distance
    int ans = -1; // Variable to store the result

    // Perform binary search to find the optimal solution
    while (st <= end) {
        int mid = st + (end - st) / 2; // Calculate the mid-point

        // Check if it's possible to place cows with a minimum distance of 'mid'
        if (ispossible(arr, n, c, mid)) {
            ans = mid; // Update the answer
            st = mid + 1; // Search for a larger minimum distance
        } else {
            end = mid - 1; // Search for a smaller minimum distance
        }
    }

    return ans; // Return the maximum minimum distance
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9}; // Stall positions
    int n = arr.size(); // Number of stalls
    int c = 3; // Number of cows

    // Output the maximum minimum distance between any two cows
    cout << getDistance(arr, n, c) << endl;

    return 0;
}
