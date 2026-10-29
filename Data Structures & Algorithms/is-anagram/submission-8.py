from collections import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # if len(s) != len(t):
        #     return False
        # a = Counter(s)
        # b = Counter(t)

        # return a == b
        return sorted(s) == sorted(t)