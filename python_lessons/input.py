#this is how to get input from a user and store it in a variable. 

name = input("type name:")
print(name)
print(type(name))
# the input function takes input from the keyboard and stores in the function name. 
# this however is not the same with number. it only takes data inform of strings.

number = input("type number:")
print(number)
print(type(number))
# this shows that the data type is a string not an integer or float value. 
# this means that one has to convert the string to integer or float.

print("the number has been converted.")
number = int(number)
print(number)
print(type(number))

#these two can be done is one line i.e;
number = int(input("type number:"))
print(number)
print(type(number))
