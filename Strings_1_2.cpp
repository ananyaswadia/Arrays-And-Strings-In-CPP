//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
    string str1;
    string str2;
    string str3;
    
    cout<<"Enter string one: ";
    cin>>str1;
    
    cout<<"Enter string two: ";
    cin>>str2;
    
    cout<<endl<<"String 1 is: "<<str1<<endl;
    cout<<"String 2 is: "<<str2<<endl;

    str3=str1+str2;
    cout<<"Concateneated string is: "<<str3<<endl;

    return 0;
}

/*  OUTPUT 
Enter string one: Ananya
Enter string two: Swadia

String 1 is: Ananya
String 2 is: Swadia
Concateneated string is: AnanyaSwadia
*/