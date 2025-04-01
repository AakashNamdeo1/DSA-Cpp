//product of an an array except self 
//using optimal approach with timme complexity of O(n)
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
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        //prefix
        for(int i=1;i<n;i++)
        {
           prefix[i]=prefix[i-1]*nums[i-1];
        }
        //suffix
        for(int i=n-2;i>=0;i--)
        {
           suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=prefix[i]*suffix[i];
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
