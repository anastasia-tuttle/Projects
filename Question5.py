def recur_fibo(n):
  """Recursive function to
  print Fibonacci sequence"""
  if n <= 1:
    return n
  else:
    return(recur_fibo(n-1) + recur_fibo(n-2))


# read number of terms
nterms = int(input("How many terms? "))

# check if number of terms are valid or not
if nterms <= 0:
  print("PLease enter a positive integer")

# call function to display sequence upto terms
else:
  print("Fibonacci sequence:")
  for i in range(nterms):
    print(recur_fibo(i))
