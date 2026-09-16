#include <iostream>
#include <vector>
using namespace std;

int Max_sum_4(vector<int>& nums, int len){
    int sum = 0;
    for(int i=0; i<len; i++){
        sum += nums[i];
    }
    int final_sum = 0;
    for (int i=len; i<nums.size(); i++){
        sum += nums[i];
        sum -= nums[i-len];
        final_sum = max(final_sum, sum);
    }
    
    return final_sum;
}

int main()
{
    vector<int> nums = {2, 5, 1, 3, 7, 6, 2, 5, 1};
    int len = 4;
    cout<<Max_sum_4(nums, len)<<endl;
    
}