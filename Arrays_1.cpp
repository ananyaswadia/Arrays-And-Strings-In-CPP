//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
 
    int numbers[5]; 

    
    cout << "Enter 5 numbers:" <<endl;
    for (int i = 0; i <5; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    cout << "\nThe array is: ";
    for (int i = 0; i <5; ++i) {
        cout << numbers[i] << " "; 
    }
    cout <<endl;

    return 0;
}

/* OUTPUT 
Enter 5 numbers:
Enter number 1: 10
Enter number 2: 20
Enter number 3: 30
Enter number 4: 40
Enter number 5: 50

The array is: 10 20 30 40 50
*/