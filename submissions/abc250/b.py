N,A,B = map(int, input().split(" "))
white_flg = True

for i in range(N):
    for j in range(A):
        for k in range(N):
            for l in range(B):
                if ( ((i+1)%2 == 0 and (k+1)%2 == 0) or ((i+1)%2 != 0 and (k+1)%2 != 0) ):
                # if ( abs((i+1)-1)+abs((k+1)-1) == 1 ):
                    print(".", end="")
                else:
                    print("#", end="")
        print("")
