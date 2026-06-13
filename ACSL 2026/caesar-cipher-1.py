n = int(input())
s = input()
k = int(input())

alphabetlower = "abcdefghijklmnopqrstuvwxyz"
alphabetupper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

for i in range(0, n):
    if s[i] in alphabetlower:
        print(alphabetlower[(alphabetlower.index(s[i], 0, 26)+k)%26], end="")
    elif s[i] in alphabetupper:
        print(alphabetupper[(alphabetupper.index(s[i], 0, 26)+k)%26], end="")
    else:
        print(s[i], end="")
print("")