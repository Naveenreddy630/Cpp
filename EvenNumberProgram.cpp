#include<iostream>
using namespace std;
int main(){
    int a[5] = {1,90,23,41,22};
    for(int i=0; i<5; i++){
        if(a[i] % 2 == 0){
            cout << a[i] <<  " ";
        }      
    }
    return 0;
}