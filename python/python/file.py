# # use open function to read the content of a file !
# # by default the mode is 'r'!
# f=open('sample.txt','r')
# # f=open('sample.txt')
# data=f.read()#read first 10 character from the file !
# print(data)
# f.close()
# f=open('sample.txt','a')
# f.write("I am appending ")
# f.close()
with open("sample.txt") as f:#we can also opem file like this way ,we donot have to close the file in this case !
    t=f.read()
    print(t)