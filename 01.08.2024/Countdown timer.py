import time 
 n = int(input("Enter countdown time in seconds: ")) 
 for i in range(n, 0, -1): 
  print(i) 
  time.sleep(1) 
 print("Time's up!") 
 
