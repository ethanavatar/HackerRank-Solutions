s, t = list(map(int, input().split()))
a, b = list(map(int, input().split()))
m, n = list(map(int, input().split()))
aps = list(map(int, input().split()))
ors = list(map(int, input().split()))

between = lambda x: s <= x and x <= t

apples  = [apple  for apple  in filter(between, map(lambda x: x + a, aps))]
oranges = [orange for orange in filter(between, map(lambda x: x + b, ors))]

print(len(apples))
print(len(oranges))