/* Container with the most water
2 pointer approach*/
#include<iostream>
#include<vector>
using namespace std;
class solution
{
    public:
    int maxarea(vector<int>&height)
    {
        int maxwater=0;//ans
        int lp=0,rp=height.size()-1;
        while(lp<rp)
        {
            
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currwater=w*ht;
            maxwater=max(maxwater,currwater);
            height[lp]<height[rp]?lp++:rp--;
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