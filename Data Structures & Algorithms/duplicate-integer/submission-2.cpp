using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> duplicates = {};
        int currentLevel = 0;
        while(currentLevel < nums.size()){
            if (find(duplicates.begin(), duplicates.end(), nums[currentLevel]) != duplicates.end()){
                return true;
            }
            duplicates.push_back(nums[currentLevel]);
            currentLevel ++;

        }
        return false;
    }
};