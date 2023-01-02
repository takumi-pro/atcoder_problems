H,W = map(int, input().split(" "))
R,C = map(int, input().split(" "))
count = 0
for i in range(H):
    for j in range(W):
        if (abs((i+1)-R)+abs((j+1)-C) == 1):
            count = count + 1
print(count)
