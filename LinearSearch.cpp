#include <bits/stdc++.h>
using namespace std;
int linearSearch(int sizeOfArray, int array[], int target){
    for(int i=0; i<sizeOfArray; i++){
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;
    cout << "Enter the size of the Array : ";
    cin >> size;
    int array[size];
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    int target;
    cout << "Enter the element you want to search in the array : " << endl;
    cin >> target;
    cout << linearSearch(size, array, target);

}
