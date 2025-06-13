class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2){
        int n1 = nums1.size(), n2 = nums2.size(), n = max(n1, n2);
        int ptr1 = 0, ptr2 = 0;
        while (n--) {
            if(nums1[ptr1] == nums2[ptr2])
                return nums1[ptr1];
            else if (nums1[ptr1] < nums2[ptr2])
                while (nums1[ptr1] < nums2[ptr2] && ptr1 != n1 - 1)
                    ptr1++;
            else if (nums1[ptr1] > nums2[ptr2])
                while (nums1[ptr1] > nums2[ptr2] && ptr2 != n2 - 1)
                    ptr2++;
        }
        return -1;
    }
};
