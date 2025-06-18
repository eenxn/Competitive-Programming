a = input()
b = ""
alpha = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"
beta = alpha.upper()

for i in range(0, len(a)):
    temp = a[i]
    if a[i] in alpha:
        temp = alpha[alpha.find(a[i])+13]
    if a[i] in beta:
        temp = beta[beta.find(a[i])+13]
        
    b += temp
print(b)