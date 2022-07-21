n = int(input())
candles = [int(x) for x in input().split(' ')]
print(candles.count(max(candles)))