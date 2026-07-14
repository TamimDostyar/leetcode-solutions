class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        output = []
        n = len(nums)
        first = 0;

        while first < n:
            products = 1
            for i in range(n):
                if first == i:
                    continue
                products *= nums[i]    
            first += 1
            output.append(products)
        return output