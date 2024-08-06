cost=int(input("Enter the cost of the meals :"))
tax=float(input("Enter the tax :"))
tip=float(input("Enter the tips :"))
taper=(tax*cost)/100
tiper=(tip*cost)/100
print("The total cost for meals (incl tax and tip) : ",cost+taper+tiper)
