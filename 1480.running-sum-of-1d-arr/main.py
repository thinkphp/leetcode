class Solution:

    def runningSum(self, nums: List[int]) -> List[int]:

        s = nums[0]

        out = [s]

        for i in range(1, len(nums)):
            
            s = s + nums[i]
            
            out.append(s)

        return out     
running-sum-of-1d-arra
