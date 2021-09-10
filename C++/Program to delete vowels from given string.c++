#include <iostream>
#include <cstring>

using namespace std;

int vowel(char c)
{
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c =='o' || c=='O' || c == 'u' || c == 'U')
		return 1;   
	else
		return 0; 
}

int main()
{
	string str,newstr;
	cout<<"Enter a string: ";
	getline(cin,str);
	int len=str.length();
	int j=0;
	for(int i = 0; i<len; i++)
	{
		if(vowel(str[i]) == 0)
		{
			newstr[j] = str[i];   
			j++;
		}
	}
	newstr[j] = '\0';  
	strcpy(str, newstr);     
	cout<<"Modified String:"<<str;
    
	return 0;
}