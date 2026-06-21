class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n;
        for(int i = 0;i<nums.size();i++){
            n = target - nums[i];
            if(mp.find(n) != mp.end()){
                return {i,mp[n]};
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};