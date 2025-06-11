class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int digit : digits) {
            freq[digit]++;
        }
        
        vector<int> ans;
        for (int num = 100; num <= 998; num += 2) { 

            int third = num % 10;        
            int second = (num / 10) % 10;
            int first = num / 100;       
            
            vector<int> curr_freq = freq;
            
            if (--curr_freq[first] >= 0 && 
                --curr_freq[second] >= 0 && 
                --curr_freq[third] >= 0) {
                ans.push_back(num);
            }
        }
        
        return ans;
    }
};