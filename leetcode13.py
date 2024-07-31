class Solution:
    def romanToInt(self, s: str) -> int:
        symbols = {
            'I': 1, 
            'V': 5, 
            'X': 10, 
            'L': 50, 
            'C': 100, 
            'D': 500, 
            'M': 1000,
        }
        lastC = None
        result = 0
        for c in s[::-1]:
            if lastC and symbols[lastC] > symbols[c]:
                result -= symbols[c]
            else:
                result += symbols[c]
            lastC = c

        return result
                


        
