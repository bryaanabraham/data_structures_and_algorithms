class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector <int> sol;
        while(i<m && j<n) {
            if(nums1[i] < nums2[j]){
                sol.push_back(nums1[i++]);
            }
            else{
                sol.push_back(nums2[j++]);
            }
        }

        while(j<n) {
            sol.push_back(nums2[j++]);
        }

        while(i<m) {
            sol.push_back(nums1[i++]);
        }

        for (int i = 0; i < sol.size(); ++i) {
            nums1[i]=sol[i];
        }
    }
};