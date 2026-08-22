class Solution {
public:
    int getMaximumGenerated(int n) {
        //nums[i] = nums[i/2] if i%2 == 0
        //nums[i] = nums[i/2] + nums[i/2 + 1] for i%2!=0

        if (n == 0) return 0;
        int nums[n+1];
        nums[0] = 0;
        nums[1] = 1;

        int maxi = nums[1];
        for (int i=2; i<n+1; i++){
            if (i%2 == 0){
                nums[i] = nums[i/2];
            }
            else{
                nums[i] = nums[i/2] + nums[i/2 + 1];
            }
            maxi = max(nums[i], maxi);
        }
        return maxi;
    }
};