class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        unordered_map<int, string> keypad = {
            {2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"},
            {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}
        };

        vector<string> result = {""};
        for (char d : digits) {
            const string& letters = keypad[d - '0'];
            vector<string> next;
            for (const string& prefix : result)
                for (char c : letters)
                    next.push_back(prefix + c);
            result = next;
        }
        return result;
    }
};