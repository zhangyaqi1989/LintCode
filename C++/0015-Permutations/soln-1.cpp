#include<bitset>
class Solution {
public:
    /*
     * @param nums: A list of integers.
     * @return: A list of permutations.
     */
    vector<vector<int>> permute(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        bitset<20> used;
        vector<vector<int>> ans;
        vector<int> path;
        dfs(nums, 0, &path, &used, &ans);
        return ans;
    }
    
private:
    void dfs(const vector<int> & nums, int idx, vector<int> * path,  bitset<20> * used, vector<vector<int>> * ans) {
        int n = nums.size();
        if(idx == n) {
            ans->push_back(*path);
        }
        for(int i = 0; i < n; ++i) {
            if(!(*used)[i]) {
                (*used)[i] = 1;
                path->push_back(nums[i]);
                dfs(nums, idx + 1, path, used, ans);
                (*used)[i] = 0;
                path->pop_back();
            }
        }
    }
};
