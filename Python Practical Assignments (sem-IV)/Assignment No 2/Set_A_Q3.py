s=input("Enter the string : ")
s1=s[0]
for i in range (1,len(s)):
    s2=s[1:].replace(s1,'$')
print(s1+s2)