class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // step 1: initialize count and candidate to get majority element
        int count = 0, candidate = 0;
        // step 2: iterate through array and find majority element
        for (int num : nums) {
            // initial case if c=0 - assign current element as candidate
            if (count == 0) {
                candidate = num;
            }
            // checking if current el is equal to candidate increase count else
            // decrease
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};