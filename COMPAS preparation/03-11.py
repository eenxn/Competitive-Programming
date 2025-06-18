n = int(input())

if n >= 10**9:
    n = round(n/10**9, 1)
    print(n, end="B\n")
elif n >= 10**7:
    n = round(n/10**7, 1)
    print(n, end="M\n")
elif n >= 10**3:
    n = round(n/10**3, 1)
    print(n, end="K\n")
else:
    print(n)