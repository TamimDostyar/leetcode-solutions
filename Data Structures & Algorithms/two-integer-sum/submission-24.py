class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ls = {}

        for key, values in enumerate(nums):
            require = target - values

            if require in ls:
                return [ls[require], key]
            ls[values] = key