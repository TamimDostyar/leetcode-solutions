using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mapVectors;
        vector<vector<string>> vectors;
        for (const auto& each_string: strs){
            string copy = each_string;
            sort(copy.begin(), copy.end());
            mapVectors[copy].push_back(each_string);
        }

        for (const auto& [key, value] : mapVectors){
            vectors.push_back(value);
        }
        return vectors;
    }
};
