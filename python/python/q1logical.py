num1=int(input("enter num1 : "))
num2=int(input("enter num2 : "))
num3=int(input("enter num3 : "))
num4=int(input("enter num4 : "))
if(num1>num2):
    f1=num1
else:
   f1=num2
if(num3>num4):
    f2=num3
else:
    f2=num4
if(f1>f2):
    print(f1,"is the greatest")
else:
    print(f2,"is the greatest")