class Solution:
    def letterCombinations(self, digits: str):
        letters = {
                '2': 'abc',
                '3': 'def',
                '4': 'ghi',
                '5': 'jkl',
                '6': 'mno',
                '7': 'pqrs',
                '8': 'tuv',
                '9': 'wxyz'
                }
        result = []
        l = []
        for d in digits:
            l.append(letters[d])
        
        l += [[] for _ in range(4-len(l))]

        for a in l[0]:
            if len(digits) == 1:
                result.append(a)
            for b in l[1]:
                if len(digits) == 2:
                    result.append(a+b)
                for c in l[2]:
                    if len(digits) == 3:
                        result.append(a+b+c)
                    for d in l[3]:
                        if len(digits) == 4:
                            result.append(a+b+c+d)

        print(result)


        
s = Solution()
s.letterCombinations('42')
