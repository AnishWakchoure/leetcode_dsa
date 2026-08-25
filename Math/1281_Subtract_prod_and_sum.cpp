class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n){
            int digit = n%10;
            sum += digit;
            product *= digit;
            n = n/10;
        }
        return product-sum;
    }
};