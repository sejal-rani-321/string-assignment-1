
/*
Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe
Input :str = "pwians"
Output : pwisna
*/

#include<iostream>
using namespace std;

string reverseSecondPart(string s,int len){

    int starte = len / 2;
    int end = len - 1;
    while(starte <= end){
        swap(s[starte++],s[end--]);
    }
    cout << "Reverse : " << s << endl;
}

int length(char s[]){
    int count = 0;
    for (int i = 0; i < s[0] != '\0'; i++){
        count++;
    }return count;
}

int main(){
    string s;
    cout << "enter a string : " << endl;
    cin >> s;
    int len = s.length();
    if(len % 2 == 0 ) cout << "Length: " << len << endl;
    else cout << " length should be even " << endl;

    reverseSecondPart(s,len);
}