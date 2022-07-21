n = int(input())

pick = 0
sum = 0

for i in range(n):
    lst = [int(x) for x in input().split(' ')]
    sum += lst[pick]
    sum -= lst[(n-1)-pick]
    pick += 1

print(abs(sum))