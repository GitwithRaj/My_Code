# def percent(marks):
#     p=((marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/500)*100
#     return p

# marks1 =[85,79,79,95,95]
# percentage1=percent(marks1)
# marks2=[80,81,84,89,86]
# percentage2=percent(marks2)
# print(percentage1, percentage2)
def greet(name):
# def greet(name="Stranger"):#stranger is whenever no argument is there this is by default value
    print("Good Day "+ name)
name=input("enter your name to greet ")
greet(name)