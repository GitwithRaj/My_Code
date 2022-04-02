# A spam comment is defined as a text containing following keywords:
# "make a lot of money","buy now","subscribe now","click this".Write a  program to detevt these spam
text=input("enter your text :")
if("make a lot of money" in text):
    spam=True
elif("buy now" in text):
    spam=True
elif("subscribe now" in text):
    spam=True
elif("click this" in text):
    spam=True
else:
    spam=False
if(spam):
   print("the text is spam")
else:
    print("the text is not a spam")