s="thequickbrownfoxjumpsoverthelazydog"
print ("The string is : \n")
print (s)


total = {}
for i in s:
    if i in total:
        total[i]=total[i]+1
    else:
        total[i]=1
        
for i in total:
    if total[i]>1:
        print (i + "=",total[i])
