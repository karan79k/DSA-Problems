class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)return false;
        if(x==0)return true;
        int original=x;
        long long rev = 0;
        while(x>0){
            int digit=x%10;
            rev = rev*10+digit;
            x=x/10;

        }
        return original == rev; }
};