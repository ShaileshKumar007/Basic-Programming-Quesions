NumOfRows = int(input("Enter number of rows: "))

for i in range(NumOfRows, 0, -1):
    for j in range(0, i):
        print("* ", end=" ")  #for numbers-->  print(j, end=" ")
    
    print("\n")