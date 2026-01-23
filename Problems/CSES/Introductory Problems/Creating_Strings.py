def fact(n):
    if n == 1:
        return 1
    return n * fact(n - 1)
def solve():
    s = input()
    freq = {}
    for i in s:
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1
    n = fact(len(s))
    for i in freq:
        n = n // fact(freq[i])
    print(n)
    ans = set()
    from itertools import permutations
    for i in permutations(s):
        ans.add(''.join(i))
    for i in sorted(ans):
        print(i)
t = 1
for i in range(t):
    solve()