#include<bits/stdc++.h>
using namespace std;
void listOfOperations(){
    cout << "1. To find Factorial of a number" << endl;
    cout << "2. To check the whether given number is prime or not" << endl;
    cout << "3. To check whether given number is Even or Odd" << endl;
    cout << "4. To find square of the number" << endl;
}
int main(){
    string s;
    do{
    listOfOperations();
    int value;
    cout << "Enter the value you want to perform the operations : " ;
    cin >> value;
    int selectOptionValue;
    cout << "Enter the option you want : ";
    cin >> selectOptionValue;
    switch(selectOptionValue){
        case 1:
        {
        int factorial = 1;
        if(value == 0 || value == 1){
            cout << "The factorial of the number is 1" << endl;
        }
        else{
              for(int i=1; i<=value; i++){
                  factorial = factorial * i;
              }
              cout << "The Factorial of the number is :" << factorial << endl;
        }
        }
              break;
        case 2:{
        int count = 0;
        if(value == 1){
            cout << "1 is neither prime nor composite";
        }
        else{
            for(int i=1; i<=value; i++){
                if(value % i == 0){
                    count++;
                }
            }
            if(count == 2){
                cout << "The given value is a prime number" << endl;
            }
            else{
                cout << "The given number is not a prime number" << endl;
            }
        }
        }
        break;
        case 3 :{
            if(value % 2 == 0){
                cout << "The given number is Even Number" << endl;
            }
            else{
                cout << "The given number is Odd number" << endl;
            }
        }
        break;
        case 4 :{
            cout << "The Square of the given number is : " << pow(value, 2) << endl;
        }
        break;
        default:
         cout << "Please enter a valid number between 1 and 4" << endl;
    }
    cout << "Do you want check the operation of one more number ---- (yes / no)" << endl;
    cin >> s;
    }
    while(s == "yes");
    cout << "THANK YOU for playing";
return 0;
}