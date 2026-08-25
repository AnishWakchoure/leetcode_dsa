// This soln is by Brute force and not recommended
class Solution {
public:
    bool isSelfDividing(int i){
        int digit = i;
        while(i){
            int last = i%10;
            if (last == 0 || digit%last != 0){
                return false;
            }
            i /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i=left; i<=right; i++){
            if (isSelfDividing(i)){
                result.push_back(i);
            }
        }
        return result;
    }
};