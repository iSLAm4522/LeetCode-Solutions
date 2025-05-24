class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_map<int, int> umap;
        std::vector<int> ans;
        int len2 = nums2.size();
        for (int i = 0; i < len2; i++) {
            int j = i + 1;
            umap[nums2[i]] = -1;
            while (j < len2) {
                if(nums2[j] > nums2[i]){
                    umap[nums2[i]] = nums2[j];
                    break;
                }
                j++;
            }
        }
        for (const int& num : nums1)
            ans.push_back(umap[num]);
        return ans;
    }
};
