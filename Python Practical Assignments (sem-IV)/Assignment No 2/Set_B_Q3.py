s=input("Enter sentence : ")
s1=s.split()
s2={}
for i in s1:
    if i in s2:
        s2[i]=s2[i]+1
    else:
        s2[i]=1
print(s2)