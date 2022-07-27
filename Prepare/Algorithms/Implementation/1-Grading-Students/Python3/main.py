def solve(grade):
    if grade >= 38 and 5 - grade % 5 < 3:
        return grade + (5 - grade % 5)
    return grade

n = int(input())
for i in range(n):
    grade = int(input())
    print(solve(grade))