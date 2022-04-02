# a=input("enter the first number for calculating the mean and difference")
# b=input("enter the second number for calculating the mean and difference")
# a=int(a)
# b=int(b)
# print(a)
# print(b)
# print("add of the no.",a+b)
# print("subtract of the no.",a-b)
# name=input()
# print("good afternoon",name)
letter= '''Dear <|NAME|>,
Greetings from ABC coding house .I am happy to tell you about your selection 
You are selected!
Have a great day ahead!
Thanks and regard,
Bill
Date:<|DATE|>
'''
name=input("enter your name :")
date=input("enter date:")
letter=letter.replace("<|NAME|>",name)
letter=letter.replace("<|DATE|>",date)
print(letter)