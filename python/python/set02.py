from typing import Union


b={1,2,3,4}
print(len(b))
a=set()
print(len(a))
a.add(1)
a.add(1.0)#both the 1,1.0 are same 
a.add(2)
print(a)
print(len(a))