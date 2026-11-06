class Solution(object):
    def scoreValidator(self, events):
        ts = 0
        cnt = 0
        for str in events:
            if str in {'0', '1', '2', '3', '4', '5', '6'}:
                ts += int(str)
            elif str == 'W':
                cnt += 1
                if cnt == 10: 
                    break
            elif str == 'WD':
                ts += 1
            elif str == 'NB':
                ts += 1
        return [ts, cnt]



        