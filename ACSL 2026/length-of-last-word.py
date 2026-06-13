s = input()
arr = s[::-1]

if len(s) == 1:
    print(1)

else:

    counter = 0
    firstisFound = False

    for i in range(0, len(s)):
        if firstisFound:
            if arr[i] == " ":
                break
            counter+=1
            continue
        if arr[i].isalpha():
            firstisFound = True
            counter+=1

    print(counter)