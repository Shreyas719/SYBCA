t=(1,2,3,4,5,6,7,8,9,1,7,8,10,12,13,14,15,16,12)
print("Repeated Values:")
for i in range(0,len(t)):
 
    for j in range(i+1,len(t)):
 
        if t[i]==t[j]:
 
            print(t[i],end=" ")
