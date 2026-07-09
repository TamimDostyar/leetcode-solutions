using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int longest = 0;
        int second_longest = 0;

        if (nums.size() >= 1){
            longest = longest + 1;
        }
        for (int i = 1; i < nums.size(); i++){
            // skip
            if (nums[i] == nums[i - 1]){
                continue;
            }
            if (nums[i] == nums[i - 1] + 1){
                longest ++;
            }

            if (nums[i] - nums[i - 1] > 1){
                second_longest = max(second_longest, longest);
                longest = 1;
            }

        }
        return max(second_longest, longest);

    }
};
