/*  */

#include<iostream>
using namespace std;

 int length(char s[]){
     int count = 0;
     for (int i = 0; i < s[0] != '\0'; i++){
         count++;
     }
     return count;
 }

int consonants(string s){
    int count = 0;
    for (int i = 0; i < s.length(); i++){
        if(s[i]  >= 'a' && s[i] <= 'z' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&s[i] != 'o' && s[i]!= 'u'){
           count++;
        }
    }
     return count;
}

int main(){
     
    string s ;
    cout << " enter a string: "<<endl;
    cin >> s;
    cout << consonants(s);
}