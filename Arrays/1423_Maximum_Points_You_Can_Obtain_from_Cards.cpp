class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left = k-1;
        int right = cardPoints.size()-1;

        int sum = 0;
        for (int i=0; i<k; i++){
            sum += cardPoints[i];
        }
        int max_sum = sum;
        while(left>=0){
            sum = sum - cardPoints[left] + cardPoints[right];
            max_sum = max(max_sum, sum);
            left--;
            right--;
        }
        return max_sum;
    }
};


/*
It first takes the sum of the first k cards (all from the left).

Then, step by step, it removes one card from the left 
side and adds one card from the right side, updating the sum.

At each step, it keeps track of the maximum sum seen so far.

Finally, it returns the largest possible score you can get 
by choosing exactly k cards from either end.
*/