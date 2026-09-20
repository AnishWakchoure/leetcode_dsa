class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i=0; i<nums.size(); i++){
            if (mp.count(nums[i])){
                // if already seen
                if ( abs(mp[nums[i]] - i) <= k ){
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};

/*
You use an unordered_map to remember the last index where each number appeared.

As you go through the array:

If the number was seen before, check the distance between its last index and the current index.

If that distance is ≤ k, return true (because the duplicate is close enough).

Otherwise, update the map with the current index.

If no nearby duplicates are found after scanning the whole array, return false
*/