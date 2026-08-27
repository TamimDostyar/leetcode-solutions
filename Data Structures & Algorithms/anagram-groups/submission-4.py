from collections import defaultdict
class Solution:

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        anagrams = defaultdict(list)

        for data in strs:
            sortedD = ''.join(sorted(data))
            anagrams[sortedD].append(data)
        return list(anagrams.values())