/*find the number which comes more than n/2 times
optimized approach using sorting O(nlogn)*/
#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int majorityelement(vector<int>& nums)
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int freq=1,ans=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                freq++;
            }
            else
            {
                freq=1;
                ans=nums[i];
            }
            if(freq==n/2)
            {
                return ans;
            }
    }
    return -1;
}
};

int main() {
    vector<int>nums={1,2,2,8,8,8,8,8};
    Solution a;
    cout<<a.majorityelement(nums);

    return 0;
}