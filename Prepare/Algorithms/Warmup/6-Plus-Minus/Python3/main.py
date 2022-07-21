_ = input()

lst = [int(x) for x in input().split(' ')]

p_positive = len([x for x in lst if x > 0]) / len(lst)
p_negative = len([x for x in lst if x < 0]) / len(lst)
p_zero = len([x for x in lst if x == 0]) / len(lst)

print(f"{p_positive:.6f}")
print(f"{p_negative:.6f}")
print(f"{p_zero:.6f}")