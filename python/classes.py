## attributes 
## methods - functions

## instances


class employee:
    #this is the blue print of the class employee
    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        #self.email = first + '.' + last + '@company.com'

    ## this is a method that is used to print out the full names of the employee.
    def fullname(self):
        return '{} {}'.format(self.first, self.last)

    def email(self):
        return self.first + '.' + self.last + '@gmail.com'



#take input from user. 
first_name = str(input("first name: "))
second_name = str(input("second name: "))
pay = float(input("amount: "))

#prints data gotten from input. 
print (first_name)
print (second_name)
print(pay)


#inputtint valued into the file. 
emp_1 = employee('Trevor', 'kibowen', 40000)
emp_2 = employee('cynthia', 'wanjiku', 20000)

#passing input gotten from the user input. 
emp_3 = employee(first_name, second_name, pay)

#kuprint kienyeji
# print('{} {}'.format(emp_1.first, emp_1.last))
# print(emp_1.email)
# print(emp_2.email)

#printing na class. 
# print(emp_2.fullname())
# print(emp_1.fullname())

#prints the full name from the method created. 
print(emp_3.fullname())

# prints the email from contatinating the names in method 
print(emp_3.email())









