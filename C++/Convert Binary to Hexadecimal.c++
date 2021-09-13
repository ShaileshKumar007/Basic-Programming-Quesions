#include <iostream>
using namespace std;

int main(){

    char binNo[1000], hexNo[1000];

    int temp;

    long int i = 0, j = 0;

    cout << "Enter Binary Number : ";

    cin >> binNo;

    while (binNo[i]){

        binNo[i] = binNo[i] - 48;

        ++i;
    }

    --i;

    while (i - 2 >= 0){

        temp = binNo[i - 3] * 8 + binNo[i - 2] * 4 + binNo[i - 1] * 2 + binNo[i];

        if (temp > 9)

            hexNo[j++] = temp + 55;

        else

            hexNo[j++] = temp + 48;

        i = i - 4;
    }

    if (i == 1)

        hexNo[j] = binNo[i - 1] * 2 + binNo[i] + 48;

    else if (i == 0)

        hexNo[j] = binNo[i] + 48;

    else

        --j;

    cout << "\nHexadecimal Number equivalent to Binary Number : ";

    while (j >= 0){

        cout << hexNo[j--];
    }

    return 0;
}