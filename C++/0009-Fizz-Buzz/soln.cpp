class Solution {
public:
    /**
     * @param n: An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        // write your code here
        vector<string> ans;
        for(int num = 1; num <= n; ++num) {
            if(num % 15 == 0) ans.push_back("fizz buzz");
            else if (num % 3 == 0) ans.push_back("fizz");
            else if (num % 5 == 0) ans.push_back("buzz");
            else ans.push_back(to_string(num));
        }
        return ans;
    }
};
