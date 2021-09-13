#include <iostream>
using namespace std;

int main()
{

    long long deciNo, temp;

    char hexNo[100];

    int j, remainder, i = 1;

    cout << "Enter Decimal Number : ";

    cin >> deciNo;

    temp = deciNo;

    while (temp != 0){

        remainder = temp % 16;

        if (remainder < 10){
            remainder = remainder + 48;
        }

        else{
            remainder = remainder + 55;
        }

        hexNo[i++] = remainder;

        temp = temp / 16;
    }

    cout << "\nHexadecimal Number corresponding to Decimal Number : ";

    for (j = i - 1; j > 0; j--){
        cout << hexNo[j];
    }

    return 0;
}