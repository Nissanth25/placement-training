def check_sign(number):
  if number > 0:
    return "Positive"
  elif number < 0:
    return "Negative"
  else:
    return "Zero"
number = float(input("Enter a number: "))
sign = check_sign(number)
print(f"The number {number} is {sign}")
