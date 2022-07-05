s=input("Enter a string : ")
tot={}

for i in s:
    if i in tot:
        tot[i]=tot[i]+1
    else:
        tot[i]=1
print(tot)
    