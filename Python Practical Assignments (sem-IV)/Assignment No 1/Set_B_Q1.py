nth=int(input("Find prime numbers upto given number : "))
print("All prime numbers upto", nth ," are : ")

for num in range(2,nth+1):
    i=2
    for i in range(2,num):
        if(num%i==0):
            i=num
            break
    if(i!=num):
        print(num, end=" ")