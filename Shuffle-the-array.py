class Solution(object):
    def shuffle(self, nums, n):
        xx,yy,tot = ([] for i in range(3))
        for tt in range(len(nums)):
            if(tt<n):
                xx.append(nums[tt])
            else:
                yy.append(nums[tt])
        
        for jj in range(0, n):
            tot.append(xx[jj])
            tot.append(yy[jj])
        return tot