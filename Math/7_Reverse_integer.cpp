class Solution {
public:
    int reverse(int x) {
        //bool is_neg = false;
        //if (x<0) is_neg = true;
        //x = abs(x);

        long long digit = 0;
        while(x){
            digit = (digit * 10) + x%10;
            x /= 10;
        }

        //if(is_neg) return (0-digit);
        if (digit < INT_MIN || digit > INT_MAX) return 0;
        return digit;
    }
};