//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int arr1;
    bool found = false;

    cout << "Enter array element to be searched: ";
    cin >> arr1;

    for(int i = 0; i < 5; i++){  
        if (arr1 == arr[i]){
            cout << "Element found in array" << endl;
            found = true;
            cout<<"Position of element is: "<<i+1<<endl;
            break;
        }
    }

    if (!found){
        cout << "Element not found in array" << endl;
    }

    return 0;
}

/* OUTPUT 
Enter array element to be searched: 50
Element found in array
Position of element is: 5


Enter array element to be searched: 12
Element not found in array
*/
