NumOfRows = int(input("Enter number of rows: "))

cnt = 0
count=0
count1=0

for i in range(1, NumOfRows+1):
    for space in range(1, (NumOfRows-i)+1):
        print("  ", end="")
        count+=1
    
    while cnt!=((2*i)-1):
        if count<=NumOfRows-1:
            print(i+cnt, end=" ")
            count+=1
        else:
            count1+=1
            print(i+cnt-(2*count1), end=" ")
        cnt += 1
    
    count1 = count = cnt = 0
    print()