class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> all_products;
        int i = 0;
        while (i < nums.size()) {
            int product = 1;
            int j = 0;                  
            while (j < nums.size()) {
                if (j == i) { 
                    j++;
                    continue;
                }
                product *= nums[j];
                j++;
            }
            all_products.push_back(product);
            i++;
        }
        return all_products;
    }
};