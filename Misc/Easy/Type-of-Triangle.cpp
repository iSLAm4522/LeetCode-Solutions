class Solution {
public:
    string triangleType(vector<int>& nums) {
        int first = nums[0], second = nums[1], third = nums[2];
        if(!((first + second > third)&&(second + third > first)&&(first + third > second)))
            return "none";
        if(first == second && second == third)
            return "equilateral";
        else if (first == second || first == third || second == third)
            return "isosceles";
        else
            return "scalene";
    }
};
