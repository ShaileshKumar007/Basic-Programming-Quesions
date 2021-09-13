NumOfRows = int(input("Enter number of rows: "))
coeffcient = 1

for i in range(1, NumOfRows+1):
    for space in range(1, NumOfRows-i+1):
        print(" ",end="")
    for j in range(0, i):
        if j==0 or i==0:
            coeffcient = 1
        else:
            coeffcient = coeffcient * (i - j)//j
        print(coeffcient, end = " ")
    print()