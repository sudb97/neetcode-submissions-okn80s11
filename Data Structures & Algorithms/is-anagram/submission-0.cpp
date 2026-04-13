class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int s_len = s.size();
        int t_len = t.size();

        if (s_len != t_len)
            return false;

        map<char, int> s_dict;
        map<char, int> t_dict;

        for (int i=0; i < s_len; i++)
            {
                s_dict[s[i]]++;
                t_dict[t[i]]++;
            }

        return s_dict == t_dict; // STL gives the overloaded implementation of underlying comparision of two hash maps
    }
};
