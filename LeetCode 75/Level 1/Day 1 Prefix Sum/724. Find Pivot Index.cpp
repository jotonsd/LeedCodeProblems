#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int index = -1;
    int right = 0, left = 0;
    for(int i = 0; i<nums.size(); i++)
    {
        right += nums[i];
    }
    for(int j = 0; j <nums.size(); j++)
    {
        if(j !=0)
        {
            left += nums[j-1];
        }
        right -= nums[j];
        cout << left << " " << right << endl;
        if(left == right){
            index = j;
            break;
        }
    }
    return index;
}
int main ()
{
    vector <int> nums = {1,2,1,2};
    cout<<pivotIndex(nums);
    return 0;
}
