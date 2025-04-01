/* To find the pair of elemnts in an vector where there sum is equal to the target*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>&nums,int target)
{
    vector<int>ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j)
    {
        int sum=nums[i]+nums[j];
        if(sum>target)
        {
            j--;
        }
        else if(sum<target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int>nums={11,15,2,7};
    int target=13;
    vector<int>ans=pairsum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}