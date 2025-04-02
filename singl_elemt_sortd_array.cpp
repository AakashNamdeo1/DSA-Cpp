/* you are given a sorted array consisting of ony integers where every element appears exactly twice, except for one element which appears exactly once*/
#include <iostream>
#include<vector>
using namespace std;
class solution 
{
    public:
    int singlenonduplicate(vector<int>&A)
    {
        int n=A.size();
        if(n==1)return A[0];
        int st=0,end=n-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(mid==0 && A[0]!=A[1]) return A[mid];
            if(mid==n-1 && A[n-1]!=A[n-2])return A[mid];
            if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1])return A[mid];
            
            if(mid%2==0)//even
            {
                if(A[mid-1]==A[mid])
                {
                    end=mid-1;
                }
                else
                {
                    st=mid+1;
                }
            }
            else//odd
            {
                if(A[mid-1]==A[mid])
                {
                    st=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
int main() {
    vector<int>A={3,3,4,4,5,1,1};
    solution b;
    cout<<b.singlenonduplicate(A)<<endl;

    return 0;
}