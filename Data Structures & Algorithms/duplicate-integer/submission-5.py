class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        isDuplicate = []
        
        
        for i in range(len(nums)):
            if nums[i] not in isDuplicate:
                isDuplicate.append(nums[i])

            else:
                return True
        return False

