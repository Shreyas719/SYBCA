s=input("Enter a string : ")
s1=" "
for i in range(0,len(s)):
    if i%2!=0:
        s1=s1+s[i]
print(s1)