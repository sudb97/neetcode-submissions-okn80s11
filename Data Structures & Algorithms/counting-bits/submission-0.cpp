class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans;

        for (int i=0; i<=n; i++)
            {
                int sum = 0;

                for (int j=0; j<10; j++)
                    {
                        if (i & (1 << j))
                            sum += 1;
                    }
                
                ans.push_back(sum);
            }
        
        return ans;
        
    }
};
