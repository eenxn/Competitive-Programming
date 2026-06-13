s = input()

counter = 1

for i in range(0, len(s)):
    if s[i].upper() == s[i]:
        counter+=1

print(counter)