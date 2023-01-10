#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minBuy = prices[0], mProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        // checking the minimum buy 
        if (minBuy > prices[i])
            minBuy = prices[i];

        // checking the max profit 
        if (prices[i]-minBuy > mProfit )
            mProfit = prices[i]-minBuy;             
    }    
    // returning the max profit 
    return mProfit;   
          
}
int main ()
{
    vector <int> nums = {7,6,4,3,1,9,10, 3, 12};
    cout<<maxProfit(nums);
    return 0;
}