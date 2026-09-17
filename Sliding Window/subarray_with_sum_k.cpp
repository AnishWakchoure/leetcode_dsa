#include <iostream>
#include <vector>
using namespace std;

int Max_subarray_k(vector<int>& nums, int k){
    int left = 0;
    int right = 0;
    int sum = 0;
    int max_len = 0;
    
    while(right<nums.size()){
        sum += nums[right];
        if (sum > k){
            sum -= nums[left];
            left++;
        }
        if (sum <= k){
            max_len = max(max_len, right-left+1);
        }
        right++;
    }
    return max_len;
}

int main()
{
    vector<int> nums = {2, 1, 3, 3, 1, 3, 1, 1, 1};
    int k = 10;
    cout<<Max_subarray_k(nums, k)<<endl;
    
}