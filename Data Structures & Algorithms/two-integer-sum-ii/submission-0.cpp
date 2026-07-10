class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < numbers.size(); i++) {
            int difference = target - numbers[i];
            if (seen.contains(difference)) {
                return {seen[difference] + 1, i + 1};
            }
            seen[numbers[i]] = i;   
        }

        return {}; 
    }
};