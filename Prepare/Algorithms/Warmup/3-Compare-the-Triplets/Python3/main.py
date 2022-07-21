alice = [int(x) for x in input().split(' ')]
bob = [int(x) for x in input().split(' ')]
alice_score, bob_score = 0, 0

assert len(alice) == len(bob)

for i in range(len(alice)):
    if alice[i] > bob[i]:
        alice_score += 1
    elif alice[i] < bob[i]:
        bob_score += 1
        
print(f"{alice_score} {bob_score}")