class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>s1;
        for(int i = s.size()-1;i>=0;i--){
            s1.push_back(s[i]);
        }
        s.clear();
        s = s1;
    }
};