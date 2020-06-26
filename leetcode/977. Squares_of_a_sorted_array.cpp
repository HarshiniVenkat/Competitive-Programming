class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        int n;
        for(int i=0;i<A.size();i++)
        {
            n=A[i];
            A[i]=n*n;
        }   
        sort(A.begin(),A.end());
        return A;      
    }
};
