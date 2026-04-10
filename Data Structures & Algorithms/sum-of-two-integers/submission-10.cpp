class Solution {
public:
    int getSum(int a, int b) {
        
        int carry=1;

        while (carry)
            {
                carry = (a & b) << 1;
                a = a ^ b;
                b = carry;
            }   


        return a;
        
    }
};
