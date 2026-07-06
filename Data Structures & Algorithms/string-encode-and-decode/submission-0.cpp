class Solution {
public:
    string encode(vector<string>& strs) {
        string out;
        for (auto& s : strs) {
            out += to_string(s.size());
            out += '#';
            out += s;
        }
        return out;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0, n = (int)s.size();
        while (i < n) {
            int j = i;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i));
            j++; 
            strs.push_back(s.substr(j, len));
            i = j + len;
        }
        return strs;
    }
};
