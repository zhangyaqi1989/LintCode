class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        int na = A.size(), nb = B.size();
        vector<int> ans(na + nb);
        int ia = 0, ib = 0;
        int idx = 0;
        while(ia < na && ib < nb) {
            if(A[ia] < B[ib]) {
                ans[idx++] = A[ia++];
            } else {
                ans[idx++] = B[ib++];
            }
        }
        while(ia < na) ans[idx++] = A[ia++];
        while(ib < nb) ans[idx++] = B[ib++];
        return ans;
    }
};
