// using two pointer method
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int len = str.length();
    int i = len - 1;
    int flag = 0;

    for (int j = 0; i < j; j++, i--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            cout << "\n Entered string is not a Palindrome.\n";
            break;
        }
    }
    if (flag == 0)
        cout << "\n Entered string is a Palindrome.\n";
        
    return 0;
}