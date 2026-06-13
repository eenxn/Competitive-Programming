s = input()


counter = 0
for i in range(0, len(s)):
    if i%3 == 1 and s[i].upper() != "O":
        counter +=1
    elif (i%3 ==0 or i%3 ==2) and s[i] != "S":
        counter +=1

print(counter)