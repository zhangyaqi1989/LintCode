class Solution {
public:
    /**
     * @param nums: A set of numbers
     * @return: A list of lists
     */
    vector<vector<int>> subsets(vector<int> &nums) {
        // write your code here
        vector<vector<int>> ans;
        vector<int> path;
        sort(nums.begin(), nums.end());
        dfs(nums, 0, &path, &ans);
        return ans;
    }
    
private:
    void dfs(const vector<int> & nums, int idx, vector<int> * path, vector<vector<int>> * ans) {
        int n = nums.size();
        if(idx == n) {
            ans->push_back(*path);
            return;
        }
        dfs(nums, idx + 1, path, ans);
        
        path->push_back(nums[idx]);
        dfs(nums, idx + 1, path, ans);
        path->pop_back();
    }
};
