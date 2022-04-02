n=int(input("enter your number "))
product=1
for i in range(n):
    product=product*(i+1)
print(product)
def recurrisive(n):
    if n==0 or n==1:
      return 1
    return n*recurrisive(n-1)
n=int(input ("enter your no. "))
p=recurrisive(n)
print(p)
