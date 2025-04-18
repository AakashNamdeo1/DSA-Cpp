//merge 2 sorted arrays
#include <iostream>
#include<vector>
using namespace std;
class solution 
{
    public:
    void merge(vector<int>&A,int m,vector<int>&B,int n)
    {
        int idx=m+n-1;
        int i=m-1;
        int j=n-1;
        while(i>=0 && j>=0)
        {
            if(A[i]>=B[j])
            {
                //A[idx]=A[i];
                //idx--;
                //i--;
                A[idx--]=A[i--];
            }
            else
            {
                A[idx--]=B[j--];
            }
        }
        while(j>=0)
            {
                A[idx--]=B[j--];
            }
    }    
};
int main() {
    vector<int>A={0,1,2,3};
    vector<int>B={4,5,6,7};
    A.resize(8);
    int n=4;
    int m=4;
    solution a;
    a.merge(A,n,B,m);
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}