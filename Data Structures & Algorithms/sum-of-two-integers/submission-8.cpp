class Solution {
public:
    int getSum(int a, int b) {

        int ans=0;
        bool cin=false;
        bool sum;
        bool cout;
        bool ai;
        bool bi;


        for (int i=0;i<32;i++)
            {
                ai = a & (1 << i);
                bi = b & (1 << i);

                sum = (ai ^ bi ^ cin);
                cout = ((ai & bi) | (cin & ai) | (cin & bi));   
                cin = cout;

                if (sum)
                    ans = (ans | (1 << i));
            }

        return ans;
        
    }
};
