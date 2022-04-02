# a={1,2,3,4,5,6}
# print(type(a))
# print(a)
b={} #this is not empty set but a dictionary
print(type(b))
b=set()# this is a empty set
print(type(b))
b.add(4)
print(b)
# Hashable type is the type which cannot be changed i.e touple while
# list and dict are not hashable as their element ane be changed
# in set we can only add hashable type element i.e only touple
b.add((4,5))
print(b)
# print(len(b))#to find the length of set
# b.remove(4)#to remove an element from the set
# print(b)
# b.add(3)
# b.add(2)
# print(b)
# print(b.pop())#remove an arbitrary element from set and return the element removed
# b.clear
# print(b)
b.union({1,2,3})
print(b)