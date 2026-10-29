from collections import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        anagram = {}

        if len(s) != len(t):
            return False
        a = Counter(s)
        b = Counter(t)

        return a == b

        # for i in range(len(s)):
        #     anagram[i] = s[i]

        # for key, values in anagram.items():
        #     if values in t:
        #         continue
        #     else:
        #         return False
        # print(anagram)
        # return True

