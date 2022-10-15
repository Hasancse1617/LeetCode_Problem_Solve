#include<iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(long long int x) {
       long long int reverse=0, n=x, rem;
       if(x < 0){
         return false;
       }
       while(n!=0)
       {
         rem=n%10;
         reverse=reverse*10+rem;
         n/=10;
       }
       if(x==reverse){
         return true;
       }else{
         return false;
       }
    }
};

int main(){
    int n, t;
    cin >> n;
    Solution sol;
    t = sol.isPalindrome(n);
    if(t){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
