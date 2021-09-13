#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
	char str[100];

	int i, lenOfStr, count = 0;

	cout << "Write a sentence : ";

	gets(str);

	lenOfStr = strlen(str);

	for (i = 0; i < lenOfStr; i++){

		if (str[i] == ' '){
            count++;
		}
	}

	cout << "Total number of words in a sentence is " << count + 1;

	return 0;

}