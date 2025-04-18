//sort array with 0s,1s,2s
//using brute force approach
#include <iostream>
#include<vector>
using namespace std;
class solution 
{
    public:
    void sortcolors(vector<int>&nums)
    {
        int n=nums.size();
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                count0++;
            }
            else if(nums[i]==1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        int idx=0;
         for(int i=0;i<count0;i++)
         {
             nums[idx]=0;
             idx++;
             
         }
         for(int i=0;i<count1;i++)
         {
             nums[idx]=1;
             idx++;
         }
         for(int i=0;i<count2;i++)
         {
             nums[idx]=2;
             idx++;
         }
    }
};
int main() {
    vector<int>nums={0,1,2,2,1,1,1,0,1,0};
    solution a;
    a.sortcolors(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<endl;
    }
    return 0;
}