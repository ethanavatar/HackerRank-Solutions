lst = [int(x) for x in input().split(' ')]
lst.sort()
print(sum(lst[:-1]), end=' ')
print(sum(lst[1:]), end='')