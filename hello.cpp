#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cout << "Enter the String : ";
cin >> s;
for(int i=0; i<6; i++){
   for(int j=0; j<=i; j++){
      cout << s[j];
   }
   cout << endl;
}
 return 0;
}
