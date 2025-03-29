// find the maximum sum subarray 
//kadane's algorithm
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxsubarray(vector<int>&nums)
{
    int currsum=0,maxsum=INT_MIN;
    for(int val:nums)
    {
        currsum+=val;
        maxsum=max(currsum,maxsum);
        if(currsum<0)
        {
            currsum=0;
        }
    }
    return maxsum;
}
int main() {
    vector<int>nums={-3,6,-2,-7,8,-3,9,-2,9};
    cout<<maxsubarray(nums)<<endl;;
    return 0;
}