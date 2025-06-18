s = input()
base = list(range(0, 10))

for i in range(0, len(s)):
    n = int(s[i])
    if n in base:
        base.remove(n)

base = list(map(str, base))
print((",").join(base))