#include<bits/stdc++.h>
using namespace std;
string palindrome(string s){
     transform(s.begin(), s.end(), s.begin(), ::tolower);
    int i = 0;
    int j = s.length() - 1;
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            return "The given string is not a palindrome";
        }
    }
    return "The given string is a palindrome";
}
int main(){
    string s = "Madama";
    string t = "Level";
    string d = "Mom";
    cout << palindrome(s) << endl;
    cout << palindrome(t) << endl;
    cout << palindrome(d);
return 0;
}