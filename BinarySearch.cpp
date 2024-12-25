#include<iostream>
#include<string>
using namespace std;
int index(int size, int arr[], int target){
   int start = 0;
   int end = size;
   while(start < end){
      int mid = (start + end) / 2;
      if(arr[mid] == target){
         return mid;
      }
      else if(arr[mid] > target){ 
      end = mid - 1;
      }
      else{
         start = mid + 1;
      }
   }
   return -1;
}
int main(){
 int a[] = {1,2,3,4,5};
cout <<  index(5, a, 6) << endl;
cout <<  index(5, a, 5) << endl;
   return 0;
}
