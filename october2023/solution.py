class Solution(object):

    def testfunction(self, s):
        self.s = s
        self.y = [i for i in self.s]
        self.counter = 0
        for i in range(len(self.y)):
            if self.y[i]=='#':
                self.counter = self.counter + 1
            pass

    def analyze(self):
        if '#' in self.y:
            for indx, value in enumerate(self.y):
                if value=='#':
                    if(indx!=0):
                        try:
                            del self.y[indx]
                            del self.y[indx-1]
                        except Exception:
                            return self.y
                        return self.y
                    else:
                        del self.y[indx]
                    return self.y
                pass
        return self.s
    
    def output(self)->str:
        if(self.counter!=0):
            for _ in range(self.counter):
                self.result=  self.analyze()
            y = self.result
            new_string = str(''.join([y[i] for i in range(len(y))]))
            return new_string
        return self.s
    
    def backspaceCompare(self, s, t):
        self.s = s
        self.t = t
        self.testfunction(self.s)
        ans1= self.output()
        
        self.testfunction(self.t)
        ans2 = self.output()
        
        print(ans1, ans2)
        booleantf = len(ans1)==len(ans2)
        if(booleantf==True and ans1==ans2):
            return True
        return False

get_solution = Solution()
x= get_solution.backspaceCompare('xywrrmp', 'xywrrmu#p')
print(x)











