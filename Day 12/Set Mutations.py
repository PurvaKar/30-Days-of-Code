n = int(input())
A = set(list(map(int, input().split())))
n = int(input())
for i in range(n):
    command = list(input().split())
    B = set(list(map(int, input().split())))
    if command[0] == "intersection_update":
        A.intersection_update(B)
    elif command[0] == "update":
        A.update(B)
    elif command[0] == "difference_update":
        A.difference_update(B)
    elif command[0] == "symmetric_difference_update":
        A.symmetric_difference_update(B)
sum=0
A = list(A)
for i in range(len(A)):
    sum+=A[i]
print(sum)