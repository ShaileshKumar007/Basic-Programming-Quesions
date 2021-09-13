NumOfRows = int(input("Enter number of rows: "))

for i in range(NumOfRows):
    for j in range(i+1):
        print("* ", end="")
    print("\n")