class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        size_t ans=0;
        int j=31;

        for (int i=0; i< 32; i++)
            {
                if (n & (1 << i))
                   ans = ans | (1 << j);

                j=j-1; 
            }

        return ans;
        
    }
};
