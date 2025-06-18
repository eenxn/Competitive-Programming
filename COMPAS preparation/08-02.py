n = int(input())
d = {}
for i in range(0, n):
    t = input().split()
    d[t[0]] = t[1]
    
m = int(input())
for i in range(0, m):
    name = input()
    if name in d.keys():
        print(d[name])
    elif name in d.values():
        for k,v in d.items():
            if v == name:
                print(k)
    else:
        print("Not found")
        
