while(True):
    number = int(input ("Enter a positive number : "))
    if(number <= 0):
        print("\n Enter valid Input")
    else: 
        break
counter = 0
while(number != 1):
    if(number%2 == 0):
        number = number/2
    else:
        number = (number * 3) + 1.0
        print("\n Current Number: ", number,end = "")
        counter = counter+1
        print("\n Counter = ",counter)
