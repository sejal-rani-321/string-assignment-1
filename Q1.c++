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

string position(string s){
    string temp = "";
    for (char j = 0; j < s.length(); j++){
        if(j%2 != 0){
            cout << "#";
        }
        else{
            cout << s[j];
        }
    }
}

int main(){
     
    // string s = "Pbwcshkuiglhlds ";
    string s;
    cout << " enter a string: "<<endl;
    cin >> s;
    position(s);
}