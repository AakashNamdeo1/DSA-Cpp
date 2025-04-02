//find the index in a array with the highest value

#include<iostream>
#include<vector>
using namespace std;
class solution 
{
    public:
    int peakindexinMA(vector<int>&A)
    {
        int st = 1,end = A.size() - 2;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(A[mid-1]<A[mid]&&A[mid]>A[mid+1])
            {
                return mid;
            }
            else if(A[mid-1]<A[mid])
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int>A={1,2,5,7,9,4,6,3};
    solution a;
    cout<<a.peakindexinMA(A)<<endl;
    return 0;
}