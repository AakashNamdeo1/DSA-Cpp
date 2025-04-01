/* Container with the most water
brute force approach*/
#include<iostream>
#include<vector>
using namespace std;
class solution
{
    public:
    int maxarea(vector<int>&height)
    {
        int maxwater=0;//ans
        for(int i=0;i<height.size();i++)
        {
            for(int j=i+1;j<height.size();j++)
            {
                int w=j-i;
                int ht=min(height[i],height[j]);
                int currwater=w*ht;
                maxwater=max(maxwater,currwater);
            }
        }
        return maxwater;
    }
};
int main()
{
    vector<int>height={4,6,67,37,97,8,45};
    solution a;
    cout<<    a.maxarea(height)<<endl;
    return 0;
}