p=[1,2,3,4,5,4]
flag=0
for i in range (0,len(p)):
    if p.count(p[i])>1:
        print("Duplicate values ")
        flag=1
        break
if flag is 0:
    print("All values are unique ")
        
