numbers=int(input())
positive_count=0
negative_count=0
zero_count=0
for num in numbers:
    if num>0:
        positive_count+=1
    elif num<0:
        negative_count+=1
    else:
        zero_count+=1

print("Given numbers:",numbers)
print("Number of +ve numbers are:",positive_count)
print("Number of -ve numbers are:",negative_count)
print("Number of Zeros are:",zero_count)
