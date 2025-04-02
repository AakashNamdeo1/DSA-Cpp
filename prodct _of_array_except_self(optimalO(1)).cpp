//product of an an array except self 
//using more optimal approach of time complexity of O(1)
#include <iostream>
#include<vector>
using namespace std;
class solution
{
    public:
    vector<int>productexceptself(vector<int>&nums)
    {
        int n=nums.size();
        vector<int>ans(n,1);
        //prefix=>ans
        for(int i=1;i<n;i++)
        {
           ans[i]=ans[i-1]*nums[i-1];
        }
        //suffix
        int suffix=1;
        for(int i=n-2;i>=0;i--)
        {
           suffix*=nums[i+1];
           ans[i]*=suffix;
        }
        
        return ans;
    }
};
int main() {
    vector<int>nums={5,7,4,3,6};
    solution a;
    vector<int>result=a.productexceptself(nums);
    for(int val:result)
    {
     cout<<val<<endl;   
    }
    
    return 0;
}