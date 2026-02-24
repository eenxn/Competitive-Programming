s = input()
arr = []

for i in range(0, len(s)):
    if s[i].isalpha() or s[i].isnumeric():
        arr.append(s[i].lower())

cpy = arr[::-1]

if arr == cpy:
    print("true")
else:
    print("false")