def gcd(x, y): 
     while y: 
         x, y = y, x % y 
     return x 
  
 a = int(input("Enter first number: ")) 
 b = int(input("Enter second number: ")) 
 print(f"GCD of {a} and {b} is {gcd(a, b)}")
