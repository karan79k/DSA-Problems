class Solution {
public:
//<h2>for solution </h2>
//just reverse the number and compare to the original
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
