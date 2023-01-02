S = input()
R = ''
if (len(S) == 1):
    R += S*6
if (len(S) == 2):
    R += S*3
if (len(S) == 3):
    R += S*2
print(R)
