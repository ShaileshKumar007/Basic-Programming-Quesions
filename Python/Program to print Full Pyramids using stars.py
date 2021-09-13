NumOfRows = int(input("Enter number of rows: "))

count = 0

for i in range(1, NumOfRows+1):
    for space in range(1, (NumOfRows-i)+1):
        print(end="  ")
   
    while count!=(2*i-1):
        print("* ", end="")
        count += 1
   
    count = 0
    print()