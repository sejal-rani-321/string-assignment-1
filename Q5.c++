/* 

Input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12

*/

#include<iostream>
using namespace std;

int integer(string s){
    int num = 0;
    for (int i = 0; i < s.length(); i++){
        num = num * 10 + (s[i] - 48);
    }
    cout <<  num;
}

int length(char s[]){
    int count = 0;
    for (int i = 0; i < s[0] != '\0'; i++){
        count++;
    }return count;
}

int main(){
    string s;
    // cout << "enter a string : " << endl;
    //cin >> s;
    if(s.length() < 10 ) cout << "Length: " << s.length()<< endl;
    else cout << " length should less than 10 " << endl;
    integer(s);

}