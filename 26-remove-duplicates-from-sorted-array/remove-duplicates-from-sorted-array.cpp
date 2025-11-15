class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // dynamic array size and count
        int count = 0;
        int n = nums.size();
        // iterate over array and increase count
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                count++;
            else
                // insert value from index o to n-count
                nums[i - count] = nums[i];
        }
        return n - count;
    }
};