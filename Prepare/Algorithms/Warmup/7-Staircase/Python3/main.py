n = int(input())
[print(' ' * (n - i - 1) + '#' * (i + 1)) for i in range(n)]
