class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = ""
        b = s[::-1]
        for ch in b:
            if ch.isalpha() or ch.isnumeric():
                a += ch

        a_2 = ""
        for ch in s:
            if ch.isalpha() or ch.isnumeric():
                a_2 += ch
        a = a.lower()
        a_2 = a_2.lower()
        return a == a_2
