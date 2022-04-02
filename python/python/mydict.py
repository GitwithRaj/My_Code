myDict ={
    "Raj":"A btech student",
    "Fast":"A quick search",
    "Marks":"[1,3,9,0]",
    "anotherdict":{"harry":"teacher"}
  
}

 
print(myDict['Marks'])
print(myDict['Raj'])
myDict['Raj']='Programmer'
print(myDict['Raj'])
print(myDict["Fast"])
print(myDict['anotherdict']['harry'])
print(myDict.keys())
# make a list of keys
print(list(myDict.keys())) 
print(myDict.items())#print all the content of the dic 
updateDict ={
    'atul':'friend',
    'shamsher':'friend',
    'anuj' :'friend'
}
myDict.update(updateDict)
print(myDict)
