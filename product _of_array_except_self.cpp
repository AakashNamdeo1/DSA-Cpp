//product of an array except self 
//using brute force approach
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
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    ans[i]*=nums[j];
                }
            }
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