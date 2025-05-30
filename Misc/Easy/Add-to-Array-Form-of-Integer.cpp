class Solution {
public:

    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int index = num.size() - 1;
        int carry = 0;
        while (index >=0 || k > 0 || carry)
        {
            int sum = carry;

            if(index>=0)
                sum += num[index--];
            
            if(k){
                sum += k%10;
                k/= 10;
            }

            carry = sum / 10;
            ans.push_back(sum % 10);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
