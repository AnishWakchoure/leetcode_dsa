# CPP Soln - The real approach
# CATCH - Use long long dtype since the inputs are past integer limits
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        long long var = x;
        long long digit = 0;
        while(var){
            digit = (digit*10) + var%10;
            var /= 10;
        }
        return (digit == x);
    }
};

#Python Soln
# Most basic soln for beginner
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 : return False     # if input is -ve answer is always -ve
        new = str(x)
        new = "".join(reversed(new))
        if new == str(x) : return True
        return False