from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        cnt = Counter(nums).most_common(k)
        

        return [number for number, _ in cnt]