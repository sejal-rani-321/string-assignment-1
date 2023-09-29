/* 
Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes
 */

#include<iostream>
using namespace std;

int length(char s[]){
    int count = 0;
    for (int i = 0; i < s[0] != '\0'; i++){
        count++;
    }
    return count;
}

bool isPalindrome(string s){
    for (int i = 0; i < s.length(); i++){
        int start = 0;
        int end = s.length() - 1;
       if(s[start] != s[end]){
        return 0;
       }
       else{
        start++;
        end--;
       }
       return 1;
    }
    
}

int main(){
    string s ="abcdcba";
    if(isPalindrome(s)==0)  cout << " No " << endl;
    else cout << " Yes " << endl;
}