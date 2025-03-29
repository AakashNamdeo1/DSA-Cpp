// find the maximum value by adiing all elements of an array
// Brute force approach
#include <iostream>
#include <algorithm> // For the max function
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5}; // Initializing the array
    
    int maxsum = 0; // Variable to store the maximum subarray sum
    
    for (int st = 0; st < n; st++) {
        int currsum = 0; // To store the current subarray sum
        for (int end = st; end < n; end++) {
            currsum += arr[end]; // Add the current element to the subarray sum
            maxsum = max(currsum, maxsum); // Update the maximum sum
        }
    }

    cout << "Max subarray sum = " << maxsum << endl; // Output the result
    return 0;
}
