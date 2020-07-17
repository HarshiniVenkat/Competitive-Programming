class Solution 
{
public:
    void duplicateZeros(vector<int>& arr) 
    {
        vector<int> dup=arr;
        int ptr=0;
        for(int i=0;i<dup.size();i++)
        {
            if(ptr<dup.size())
                arr[ptr]=dup[i];
            else 
                break;
            ptr++;
            if(dup[i]==0)
            {
                if(ptr<dup.size())
                    arr[ptr]=0;
                else break;
                ptr++;
            }
        }
    }
};
