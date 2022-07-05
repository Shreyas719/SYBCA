s=input("Enter a string : ")
if len(s)<2:
    print("String is empty.")
elif len(s)==2:
    print(s*2)
else:
    s1=s[0]+s[1]+s[-2]+s[-1]
    print(s1)
