class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        another=[]
        total=0
        for i in range(0, len(nums)):
            total =total + nums[i]
            another.append(total)
        return another