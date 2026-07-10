class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        spare = []

        for i in range(len(nums)):
            if nums[i] not in spare:
                spare.append(nums[i])
            else:
                return True
        return False