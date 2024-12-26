#include<bits/stdc++.h>
using namespace std;
int square(int size, int x[]){
    int min;
    for(int i=0; i<size-1; i++){
        min = i;
        for(int j=i; j<size; j++){
            if(x[j] < x[min]){
                int temp = x[j];
                x[j] = x[min];
                x[min] = temp;
            }
        }
    }
}
void display(int size, int x[]){
    for(int i=0; i<size; i++){
        cout << x[i] << " ";
    }
}
int main(){
   int x[] = {6,7,2,3,4,0};
   square(6, x);
   display(6, x);
}
