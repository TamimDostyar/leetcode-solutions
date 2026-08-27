class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ls = {}

        for item, value in enumerate(nums):
            need = target - value
            if need in ls:
                print(ls)
                return [ls[need], item]
            ls[value] = item
