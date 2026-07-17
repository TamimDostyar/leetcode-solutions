class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> maps;
       int left =0;
       int count = 0;
       int res = 0;

       for (int right = 0; right < s.size(); right ++){
            maps[s[right]]++;
            count = max(count, maps[s[right]]);

            int windowSize = right - left + 1;
            int characterToReplace = windowSize - count;

            if (characterToReplace > k){
                maps[s[left]] --;
                left++;
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};