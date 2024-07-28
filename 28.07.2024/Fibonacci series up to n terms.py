n = int(input("Enter the number of terms: "))
fibonacci = [0, 1]
for i in range(2, n):
    fibonacci.append(fibonacci[-1] + fibonacci[-2])
print("Fibonacci series up to", n, "terms:", fibonacci)
