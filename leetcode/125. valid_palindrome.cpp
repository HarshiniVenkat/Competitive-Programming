
class Solution {
public:
    bool isalpha(char a)
    {
        if((a>='a' && a<'z') || (a>='A' && a<='Z') || (a>='0' && a<='9')) return true;
        else return false;
    }
    bool isPalindrome(string s) 
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        int n=s.length();
        int p1=0,p2=n-1;
        if(n==0)
            return true;
        else
        {
            while(p2>p1)
            {
                if(!isalpha(s[p1])){ p1++; continue;}
                if(!isalpha(s[p2])) {p2--;continue;}
                if(s[p1]!=s[p2]) return false;
                p1++;
                p2--;
            }
            return true;
        }
    }
};
