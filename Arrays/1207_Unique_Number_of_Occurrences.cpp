// IDEA - create a frequency map to store occurance of each number.
// use a 'seen' set to identify if an occurance reprated.

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for ( int i : arr){
            mp[i]++;
        }
        set<int> seen;
        for (auto &i : mp){
            if (seen.count(i.second)){
                return false;
            }
            seen.insert(i.second);
        }
        return true;
    }
};