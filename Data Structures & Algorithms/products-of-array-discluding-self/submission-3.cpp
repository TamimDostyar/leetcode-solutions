class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> all_products;
        int i = 0;
        while (i < nums.size()){
            int products = 1;
            int j = 0;
            while (j < nums.size()){
                if (i == j){
                    j++;
                    continue;
                }
                products *= nums[j];
                j++;
            }
            all_products.push_back(products);
            i++;
        }
        return all_products;
    }
};