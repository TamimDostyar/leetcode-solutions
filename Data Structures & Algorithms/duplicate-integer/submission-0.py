class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nest = {}
        for i, num in enumerate(nums):
            if num in nest:
                return True
            nest[num] = i
        return False
