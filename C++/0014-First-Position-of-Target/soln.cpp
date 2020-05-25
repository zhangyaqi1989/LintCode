class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target to find.
     * @return: The first position of target. Position starts from 0.
     */
    int binarySearch(vector<int> &nums, int target) {
        // write your code here
        auto it = lower_bound(nums.begin(), nums.end(), target);
        return (it != nums.end() && (*it) == target) ? it - nums.begin() : -1;
    }
};
