class Solution:

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        anagrams = {}
        for data in strs:
            sortedD = ''.join(sorted(data))
            if sortedD in anagrams:
                anagrams[sortedD].append(data)
            else:
                anagrams[sortedD] = [data]
        return list(anagrams.values())