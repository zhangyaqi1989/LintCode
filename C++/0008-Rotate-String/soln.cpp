class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        // write your code here
        if(str.empty()) return;
        int n = str.size();
        offset %= n;
        rotate(str.rbegin(), str.rbegin() + offset, str.rend());
    }
};
