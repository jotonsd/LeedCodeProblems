#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {

    vector <int> result;
    auto sum = 0;
    for(int i=0; i < nums.size(); i++)
    {
        // implementing result size
        result.push_back(i);

        // calculating the sum value
        sum = sum + nums[i];

        // assigning the value into the result key
        result[i] = sum;
        cout<<result[i]<<",";

    }
    return result;
}
int main ()
{
    vector <int> nums = {1,2,3,4};
    // calling the
    runningSum(nums);

    return 0;
}
