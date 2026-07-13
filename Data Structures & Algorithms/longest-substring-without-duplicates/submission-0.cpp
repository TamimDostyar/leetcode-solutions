class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int counter = 0;
        unordered_set<char> res;

        for (int r = 0; r < s.size(); r ++){
            while (res.contains(s[r])){
                res.erase(s[left]);
                left ++;
            }
            res.insert(s[r]);
            counter = max(counter, r - left + 1);
        }
        return counter;
    }
};
