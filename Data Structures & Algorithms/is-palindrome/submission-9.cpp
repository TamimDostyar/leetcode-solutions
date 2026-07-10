class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0;
        int last = s.size() -1;
        while (first < last){
            while (first < last && !isNumerical(s[first])) first ++;
            while (last > first && !isNumerical(s[last])) last --;

            if (tolower(s[first]) != tolower(s[last])){
                return false;
            }

            first++;
            last--;
        }
        return true;
    }
    bool isNumerical(char c) {
        return ('A' <= c && c <= 'Z') ||
            ('a' <= c && c <= 'z') ||
            ('0' <= c && c <= '9');
    }
};
