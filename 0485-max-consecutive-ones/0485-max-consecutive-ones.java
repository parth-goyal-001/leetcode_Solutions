class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int m=0;
        int t=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                t++;
            }
            else{
                if(m<t){
                    m=t;
                   
                }
                 t=0;
            }    
        }
        if(m<t){
            m=t;
        }
        return m;
        
    }
}