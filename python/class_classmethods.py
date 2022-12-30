
# take input from user. 
first_name = str(input("first name: "))
second_name = str(input("second name: "))
upay = float(input("amount: "))
payrise = float(input("raise by: "))

class employee:

    #class variable. 
    raise_amount = 1.04

    # this is the blue print of the class employee
    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay

    # this is a method that is used to print out the full names of the employee.
    def fullname(self):
        return '{} {}'.format(self.first, self.last)

    def email(self):
        return self.first + '.' + self.last + '@gmail.com'

    def apply_pay_raise(self):
        self.pay = float(self.pay * employee.raise_amount)
        return self.pay

    @classmethod
    def set_raise_amt(cls, amount):
        cls.raise_amount = amount


emp_1 = employee(first_name, second_name, upay)

print(emp_1.first)
print(emp_1.last)
print(emp_1.pay)

#prints the full name from the method created. 
print(emp_1.fullname())

# prints the email from contatinating the names in method 
print(emp_1.email())

print(emp_1.apply_pay_raise())

employee.set_raise_amt(payrise)

print(emp_1.apply_pay_raise())
