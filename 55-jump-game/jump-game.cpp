class Solution {
public:
    bool canJump(vector<int>& nums) {
        /*
        Formula used : current position + maximum jump >= goal
        = 3 + 1 >= 4
        = true
        */
        int goal = nums.size() - 1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (i + nums[i] >= goal) {
                goal = i;
            }
        }

        return goal == 0;

        /*
        Approach: 
        
        We use a greedy strategy and keep a variable maxReach to store the
        farthest index we can reach at any point. As we iterate through the
        array:

        If the current index i is greater than maxReach, it means we are stuck
        and can't proceed. Otherwise, we update maxReach to the maximum of its
        current value and i + nums[i].


        Solution :

        int maxReach = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > maxReach) return false;
            maxReach = max(maxReach, i + nums[i]);
        }
        return true;

        */
    }
};