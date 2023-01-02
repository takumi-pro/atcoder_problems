nums = list(map(int, input().split(" ")))
A = nums[0]
B = nums[1]
K = nums[2]

result = 0
count = 1
while B > result:
    if (count == 1):
        result = A*count*K
    else:
        result = result*K
    count += 1
if (B <= A):
    print(0)
else:
    print(count-1)
