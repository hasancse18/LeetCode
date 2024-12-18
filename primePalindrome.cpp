class Solution {
public:
    bool isprime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    bool ispalindrome(int n)
    {
        string str = to_string(n);
        string s=str;
        reverse(s.begin(),s.end());
        return s==str;
    }
    int primePalindrome(int n) {
        if(n<=2) return 2;
        if(n<=11 && isprime(n)) return n;
        if(n>=9989900) return 100030001;
        for(int i=n;i<2e8+5;i++)
        {
            if(isprime(i) && ispalindrome(i)) return i;
        }

        return 1;
    }
};