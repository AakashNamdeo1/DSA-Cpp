/* Best time to buy and sell stocks*/

#include<iostream>
#include<vector>
using namespace std;
class solution
{
  public:
  int maxprofit(vector<int>&prices)
  {
      int maxprofit=0,bestbuy=prices[0];
      for(int i=1;i<prices.size();i++)
      {
          if(prices[i]>bestbuy)
          {
              maxprofit=max(maxprofit,prices[i]-bestbuy);
          }
          bestbuy=min(bestbuy,prices[i]);
      }
      return maxprofit;
  }
};
int main()
{
    vector<int>prices={7,34,23,4,67};
    solution a;
    cout<<a.maxprofit(prices)<<endl;
    return 0;
}