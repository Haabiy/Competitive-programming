class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        ans=[]
        total =0
        ans.append(0)
        for i in range(0, len(gain)):
            total = total + gain[i]
            ans.append(total)
        alt=list(ans)
        return max(alt)