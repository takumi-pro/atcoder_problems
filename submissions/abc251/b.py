import itertools
N,W = map(int, input().split(" "))
A = list(map(int, input().split(" ")))
arr = []
for i in itertools.combinations(A, 3):
    if (sum(i) <= W):
        arr.append(sum(i))
for i in itertools.combinations(A, 2):
    if (sum(i) <= W):
        arr.append(sum(i))
for i in itertools.combinations(A, 1):
    if (sum(i) <= W):
        arr.append(sum(i))
print(len(set(arr)))
