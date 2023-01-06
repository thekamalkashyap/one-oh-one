''' hello!, programmer
this a multiline comment '''

# and this a single line comment

# function
def hello():
    print('hello world')

#  function taking int as input and return int as output
def sum(x,y):
    return x + y

# if and else statement
def greater( x, y, z):
    if (x >= y and x >= z):
        print(f"{x} is greatest of the 3\n")
    elif (y >= x and y >= z):
        print(f"{y} is greatest of the 3\n")
    else:
        print(f"{z} is greatest of the 3\n")


# string
s1 = 'hello world'
# integer
age = 18
# decimel number or float
pie = 3.14159141
# list 
arr = [1,2,3,4]
# set
s2 = {1,2,3}
# dictionary
d = {1:2,'h':'hello'}
# tuple 
t = (1,2,3)

# calling hello function
hello()

# taking input from user
i = input('enter your name: ')
print(f"your name is {i}")

# switch case
match age:
    case 21:
        print("you are 21")
    case 18:
        print("you are 18")
    case _:
        print("you are undefined")

# integer array
arr =  [33, 42, 198, 39, 01, 3636]

j = 1
while (j < 6):
    print(j)
    j+=1


# read test.txt file in current directory
f = open("test.txt", "r")
for x in f:
  print(x) 
f.close() 