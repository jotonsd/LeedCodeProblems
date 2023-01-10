#include <iostream>
#include <vector>
using namespace std;

  int search(vector<int>& nums, int target) {
    int pivot, left = 0, right = nums.size() - 1;
    while (left <= right) {
      pivot = left + (right - left) / 2;
      if (nums[pivot] == target) return pivot;
      if (target < nums[pivot]) right = pivot - 1;
      else left = pivot + 1;
    }
    return -1;
  }
int main ()
{
    vector <int> nums = {1,2,3,5,9,10};
    cout<<search(nums,9);
    return 0;
}
