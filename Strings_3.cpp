//Ananya Swadia
//24070123012

#include <iostream>
#include<string>
using namespace std;

int main() {
    string str ="Good Morning" ; 
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    cout << "The length of the string is: " << count << endl;
    
    cout<<"Reversed String:";
    for(int i = count ; i >= 0; i--){
        cout<<str[i];
    }
    return 0;
}

/*  OUTPUT 
The length of the string is: 12
Reversed String:gninroM dooG
*/
