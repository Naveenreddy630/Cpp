#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    int sum = 0;
    cout << "Enter the size of an array : ";
    cin >> size;
    int x[size];
    cout << "Enter the elements of an Array" << endl;
    for(int i=0; i<size; i++){
        cin >> x[i];
    }
    cout << "The Elements of an Array are : ";
    for(int i=0; i<size; i++){
        cout << x[i] << " ";
    }
    cout << endl << "The sum of elements of the given array is : ";
    for(int i=0; i<size; i++){
       sum += x[i];
    }
    cout << sum;
    return 0;
}