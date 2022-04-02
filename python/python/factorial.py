num=int(input("enter the no. for factorial :"))
factorial=1
for i in range(1,num+1):
    factorial=factorial*i
print(f"the factorial of the {num} in {factorial}")