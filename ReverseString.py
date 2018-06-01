class Solution(object):
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        r = ""
        l = len(s)-1
        for i in range(l+1):
            r += s[l-i]
            
        return r
        