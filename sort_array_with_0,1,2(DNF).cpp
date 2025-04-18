//sort array with 0s,1s,2s
//using dutch national flag algorithm
#include <iostream>
#include<vector>
using namespace std;
class solution 
{
    public:
    void sortcolors(vector<int>&nums)
    {
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[high],nums[mid]);
                high--;
            }
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