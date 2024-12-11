class Solution {
public:
    bool isPalindrome(int b,int n)
    {
        string str="";
        while(n)
        {
            str+=to_string(n%b);
            n=n/b;
        }
        string rev = str;
        reverse(rev.begin(),rev.end());
        return rev==str;
    }
    bool isStrictlyPalindromic(int n) {
        bool x=true;
        for(int i=2;i<=n-2;i++)
        {
            if(!isPalindrome(i,n))
                return false;
        }
        return true;
    }
    
};