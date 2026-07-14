class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> counter;
        int left = 0;
        int maxFreq = 0;
        int maxSize = 0;

        for (int right = 0; right < s.size(); right++){
            counter[s[right]]++;
            maxFreq = max(maxFreq, counter[s[right]]);

            if ((right - left + 1) - maxFreq > k){
                counter[s[left]]--;
                left++;
            }

            maxSize = max(maxSize, right - left + 1);
        }

        return maxSize;
    }
};