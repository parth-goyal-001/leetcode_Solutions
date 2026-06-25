class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int>temp;
        vector<int>temp1;
        int n = nums.size();
         k = k % n;
        int ind = n-1;
        int m = k;
        while(m>0){
            temp.push_back(nums[ind--]);
            m--;
        }
        int b  = temp.size()-1;
        for(int i = b;i>=0;i--){
            temp1.push_back(temp[i]);
        }
        for(int i = 0;i<n-k;i++){
            temp1.push_back(nums[i]);
        }
        nums = temp1;
    }
};