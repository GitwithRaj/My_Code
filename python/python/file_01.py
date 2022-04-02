f=open('poem.txt')
t=f.read()
a=input("enter your word to check  ")
if a in t:
    print(a," is present in the poem")
else :
    print(a," is not present in the poem")   
f.close()     