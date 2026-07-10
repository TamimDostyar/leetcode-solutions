class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vectors;
        for (int i = 0; i < nums.size(); i ++){
            for (int j = i + 1; j < nums.size(); j ++){
                for (int k = j + 1; k < nums.size(); k ++){
                    if (nums[i] + nums[j] + nums[k] == 0){
                        vectors.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        set<vector<int>> new_vectors;
        for (auto vec: vectors){
            sort(vec.begin(), vec.end());
            new_vectors.insert(vec);
        }
        return vector<vector<int>>(new_vectors.begin(), new_vectors.end());
    }
    
};
