class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        spare = {}

        for i in range(len(nums)):
            difference =  target - nums[i]
            if difference in spare:
                return [spare[difference], i]
            spare[nums[i]] = i