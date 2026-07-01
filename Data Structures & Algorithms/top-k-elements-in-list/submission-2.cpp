using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count = countNums(nums);
        vector<int> topK;

        for (const auto&pair: count){
            topK.push_back(pair.first);
        }
        sort(topK.begin(), topK.end(), [&](int a, int b) {return count[a] > count[b];});
        return vector<int>(topK.begin(), topK.begin() + k);
    }



    unordered_map<int, int> countNums(vector<int>& nums){
        unordered_map<int, int> maps;
        for (int n : nums){
            maps[n]++;
        }
        return maps;
}
};
