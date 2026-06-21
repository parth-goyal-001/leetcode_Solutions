class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x = 1;
        int x1 = 1;
        int flag = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != 0){
            x*=nums[i];
            x1*= nums[i];
            }
            else{
                flag++;
                x*= nums[i];
            }
        }
        if(flag==nums.size()){
            for(int i = 0;i<nums.size();i++){
                nums[i] = 0;
            }
        }
        else{
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != 0){
            nums[i] = x/nums[i];
            }
            else if(flag >= 2){
                nums[i] = 0;
            }
            else{
                nums[i] = x1;
            }
        }
        }
        return nums;
    }
};