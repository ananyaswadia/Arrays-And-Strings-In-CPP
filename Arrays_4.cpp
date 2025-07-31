//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
    int arr1[5];
    int sum=0;
    int avg;
    
    for (int i=1;i<=5;i++){  //input
        cout<<"Enter element number "<< i <<" :";
        cin>>arr1[i];
    }
    
    for (int i=0;i<=5;i++){   //sum
        sum=sum+arr1[i];
    }
    cout<<"Sum of all the elements of the array is :"<<sum<<endl;
    
    for(int i=0;i<=5;i++){   //average
        avg=sum/5;
    }
    cout<<"Average of all the elements is :"<<avg<<endl;
    
    return 0;
}

/*  OUTPUT 
Enter element number 1 :10
Enter element number 2 :20
Enter element number 3 :30
Enter element number 4 :40
Enter element number 5 :50
Sum of all the elements of the array is :150
Average of all the elements is :30
*/