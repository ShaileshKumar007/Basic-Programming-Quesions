NumOfRows = int(input("Enter number of rows: "))

ascii_val = 65

for i in range(NumOfRows):
    for j in range(i+1):
        alphabet = chr(ascii_val)
        print(alphabet, end=" ")
    
    ascii_val += 1
    print("\n")