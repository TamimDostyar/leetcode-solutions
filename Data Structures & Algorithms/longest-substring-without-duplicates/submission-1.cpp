class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int counterMax = 0;
        unordered_set<char> sets;

        for (int right = 0; right < s.size(); right ++){
            while (sets.contains(s[right])){
                sets.erase(s[left]);
                left ++;
            }
            sets.insert(s[right]);
            counterMax = max(counterMax, right - left + 1);
        }
        return counterMax;
    }
};
