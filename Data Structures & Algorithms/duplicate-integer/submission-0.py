class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # Return TRUE if any number appears more than once
        seen=set()

        for x in nums:
            if x in seen:
                return True
            seen.add(x)
        
        return False

