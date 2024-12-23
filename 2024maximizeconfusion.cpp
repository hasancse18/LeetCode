class Solution {
public:

    int countMax(string answerKey,char c,int k)
    {
        int n= answerKey.size(),l=0,f=0,t=0,len=0,ans=0;
        //for flipping f to t;
        for(int i=0;i<n;i++)
        {
            if(answerKey[i]==c)
            {
                f++;
            }
            if(f>k)
            {
                if(answerKey[l]==c) f--;
                l++;
                
            }
            ans = max(ans,i-l+1);
        }
        return ans;
    }

    int maxConsecutiveAnswers(string answerKey, int k) {
        int n= answerKey.size(),l=0,f=0,t=0,len=0,ans=0;
        
        return max(countMax(answerKey,'F',k),countMax(answerKey,'T',k));
    }
};