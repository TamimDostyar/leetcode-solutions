class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        spare = {}

        for i, position in enumerate(nums):
            difference = target - position

            if difference in spare:
                return [spare[difference], i]
            spare[position] = i