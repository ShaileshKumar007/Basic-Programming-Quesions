#include<iostream>
using namespace std;

int main(){

     long long deciNO, temp;

     int octalNo[100], i = 1, j;

     cout<<"Enter the decimal number: ";

     cin>>deciNO;

     temp = deciNO;

     while (temp != 0){
         octalNo[i++] = temp % 8;
         temp = temp / 8;
     }

     cout<<"Equivalent octalNo value of decimal no: ";

     for (j = i - 1; j > 0; j--)
        cout<<octalNo[j];

     return 0;

}