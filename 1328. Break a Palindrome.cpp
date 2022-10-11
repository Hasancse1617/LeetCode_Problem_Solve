#include<iostream>
#include <string>
using namespace std;

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int s = palindrome.size();
        if(s==1){
            return "";
        }
        for(int i=0; i<s; i++){
            if(palindrome[i] != 'a'){
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome[s-1]='b';
        return palindrome;
    }
};
int main(){
  Solution palin;
  cout << palin.breakPalindrome("Hasan")<<endl;
  return 0;
}

