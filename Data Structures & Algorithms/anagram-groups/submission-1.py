class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ls = []
        groupedAnagaram = self.isAnagram(strs)
        for key, value in groupedAnagaram.items():
            ls.append(value)
        return ls

    def isAnagram(self, strs: List[str]):
        mini = {}
        for s in strs:
            key = s
            key = "".join(sorted(key))
            mini.setdefault(key, []).append(s)
        return mini
            
    