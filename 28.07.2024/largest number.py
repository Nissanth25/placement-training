a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = int(input("Enter the third number: "))

if a == b == c:
    print("All numbers are equal")
elif a == b > c or a == c > b or b == c > a:
    print("Equal numbers are larger")
else:
    print("The largest number is:", max(a, b, c))
