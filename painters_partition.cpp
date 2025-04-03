// Painters Partition Problem
// n = number of elements in an array (length of the boards)
// m = number of painters
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to check if it is possible to paint all boards within maxAllowedTime
// using no more than m painters
bool ispossible(vector<int>& arr, int n, int m, int maxAllowedTime) {
    int painters = 1; // Initialize with one painter
    int time = 0; // Track current time taken by a painter

    for (int i = 0; i < n; i++) {
        // If the current board can be painted within maxAllowedTime by the current painter
        if (arr[i] + time <= maxAllowedTime) {
            time += arr[i]; // Add the time required for this board
        } else {
            // Assign a new painter
            painters++;
            time = arr[i]; // Start the time tracking for the new painter
        }
    }
    // Return true if the number of painters used is within the allowed limit
    return painters <= m;
}

// Function to find the minimum time required to paint all boards
int mintimetopaint(vector<int>& arr, int n, int m) {
    int sum = 0, maxval = INT_MIN;

    // Calculate total sum of board lengths and find the maximum length
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxval = max(maxval, arr[i]);
    }

    // The minimum possible time is the time to paint the largest board
    // The maximum possible time is the sum of all board lengths
    int st = maxval, end = sum, ans = -1;

    // Use binary search to find the optimal solution
    while (st <= end) {
        int mid = st + (end - st) / 2; // Calculate the mid-point

        // Check if it is possible to paint all boards in 'mid' time
        if (ispossible(arr, n, m, mid)) {
            ans = mid; // Update the answer
            end = mid - 1; // Search in the left half
        } else {
            st = mid + 1; // Search in the right half
        }
    }

    return ans; // Return the minimum time required
}

int main() {
    vector<int> arr = {40, 30, 10, 20}; // Array of board lengths
    int m = 2; // Number of painters
    int n = arr.size(); // Number of boards

    // Output the minimum time required to paint all boards
    cout << mintimetopaint(arr, n, m);

    return 0;
}
