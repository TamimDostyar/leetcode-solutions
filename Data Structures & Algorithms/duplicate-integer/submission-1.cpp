using namespace std;
class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {   
            vector<int> uniques;
            int i = 0;
            while (i < nums.size()){
                if (find(uniques.begin(), uniques.end(), nums[i]) != uniques.end()){
                    return true;

                }
                uniques.push_back(nums[i]);
                i += 1;
            }
            return false;
        }
};