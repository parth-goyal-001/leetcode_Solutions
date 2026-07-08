class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)return 0;
        int bb = prices[0];
        int result;
        for(int i = 1;i<prices.size();i++){
            if(prices[i] < bb){
                bb = prices[i];
            }
            if((prices[i] - bb) > result){
                result = prices[i] - bb;
            }
        }
        return result;
    }
};