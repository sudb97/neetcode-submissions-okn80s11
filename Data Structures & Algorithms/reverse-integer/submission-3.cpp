#include <math.h>
class Solution {
public:
    int reverse(int x) {
        
        int flag = 0;
        int result = 0;
        int digit;
        int MAX = pow(2,31)-1;
        int MIN = -1* pow(2,31);

        if (x < 0)
            {
            flag =1;
            x = -1 * x;
            }

        while (x > 0)
            {
                digit = x % 10;
                x = x / 10;

                if (result > MAX / 10)
                    return 0;
                else if (result == MAX / 10)
                    {
                        if (digit > MAX % 10)
                            return 0;
                    }
                
                result = result * 10 + digit;
            }

        if (flag == 1)
            {
                result = result * -1;
            }
        

        return result;
        
    }
};
