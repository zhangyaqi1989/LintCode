class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target to find.
     * @return: The first position of target. Position starts from 0.
     */
    int binarySearch(vector<int> &nums, int target) {
        // write your code here
        int n = nums.size();
        int lo = 0, hi = n - 1;
        while(lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if(nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        return (lo < n && nums[lo] == target) ? lo : -1;
    }
};
