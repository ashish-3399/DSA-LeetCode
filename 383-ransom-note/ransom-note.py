class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        rs = len(ransomNote)
        ms = len(magazine)

        dic = {}
        for ch in magazine:
            dic[ch] = 1 + dic.get(ch, 0)
        for ch in ransomNote:
            if ch not in dic or dic[ch] <= 0:
                return False
            dic[ch] -= 1
        return True
