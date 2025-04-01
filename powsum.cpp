/* find the number with power */

#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    double mypow(double x,int n)
    {
        if(n==0)
        return 1.0;
        if(x==0)
        return 0.0;
        if(x==1)
        return 1.0;
        if(x==-1 && n%2==0)
        return 1.0;
        if(x==-1 && n%2!=0)
        return -1.0;
        
        long binform=n;
        if(n<0)
        {
            x=1/x;
            binform=-binform;
        }
        double ans=1;
        while(binform>0)
        {
            if(binform%2==1)
            {
                ans *=x;
            }
            x*=x;
            binform/=2;
        }
        return ans;
    }
};
int main()
{
    int x=5;
    int n=4;
    solution a;
    cout<< a.mypow(x,n)<<endl;
}