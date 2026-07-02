using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> lst;
        unordered_map<string, vector<string>> maps = isAnagarams(strs);

        for (const auto& [key, value] : maps) {
            lst.push_back(value);
        }

        return lst;
}
    unordered_map<string, vector<string>> isAnagarams(vector<string> & strs){
        unordered_map<string, vector<string>> maps;

        for (auto& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            maps[key].push_back(s);
        }
        return maps;

    }
};
