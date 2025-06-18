n = int(input())

m = []
while n != 1:
    m.append(n)
    
    if n%2 == 0:
        n //= 2
        # print(n, end="->")
    else:
        n = (3*n)+1
        # print(n, end="->")
        
m.append(1)
m = list(map(str, m))        
print("->".join(m[len(m)-15:len(m)]))