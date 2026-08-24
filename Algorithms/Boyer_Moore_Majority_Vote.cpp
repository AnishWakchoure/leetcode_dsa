#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int candidate = 0;
        
        //Find candidate
        for (int i : nums){
            if (vote == 0){
                candidate = i;
                vote = 1;
            }
            else if (i == candidate){
                vote++;
            }
            else{
                vote--;
            }
        }
        
        //The verification block is only needed when majority is NOT guaranteed.
        //Verify candidate - Majority exists
        int count = 0;
        for(int i : nums){
            if (i == candidate){
                count++;
            }
        }
        //A majority element means it appears more than half of the array
        if (count > nums.size()/2){
            return candidate;
        }
        return -404;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {1, 2, 1};

    int result = sol.majorityElement(nums);

    if (result != -404)
        cout << "Majority element is: " << result << endl;
    else
        cout << "Error 404. No majority element found." << endl;

    return 0;
}
