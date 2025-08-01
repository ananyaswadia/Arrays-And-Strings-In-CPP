//Ananya Swadia
//24070123012

#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();
    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}

/*  OUTPUT 
Enter a string: malayalam
The string is a palindrome.

Enter a string: morning
The string is not a palindrome.
*/