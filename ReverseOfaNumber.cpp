#include<bits/stdc++.h>
using namespace std;
int main(){
    int number, remainder;
    string s;
    do{
    int  reverseOfaNumber = 0;
    cout << "Enter any number greater than 10 : ";
    cin >> number;
    while(number >= 1){
        remainder = number % 10;
        reverseOfaNumber = reverseOfaNumber * 10 + remainder;
        number = number / 10;
    }
    cout << "The Reverse of given number is : " << reverseOfaNumber << endl;
    cout << "Do you want to Reverse the other number : (yes / no) ";
    cin >> s;
    }
    while(s == "yes");
    cout << "Thank you for reversing the numbers";

   return 0;
}