/**
  * Given a string s, find the length of
  * the longest substring without repeating characters.
  *
  * Constraints:
  *  0 <= s.length <= 5 * 104
  *  s consists of English letters, digits, symbols and spaces.
**/

#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

// solution1
int lengthOfLongestSubstring1(std::string s) 
{
    if(s.empty()) return 0;
    
    std::unordered_map<char, int> substr;
    int res{0};
    
    for(int i = 0; i < s.size(); ++i)
    {
        if(substr.find(s[i]) != substr.end())
        {       
            if(res < substr.size())
                res = substr.size();

            i = substr[s[i]];
            substr.clear();
        }
        else   
          substr[s[i]] = i;  
    }
    
    if(res < substr.size())
        res = substr.size();
            
    return res;
}

// solution2
int lengthOfLongestSubstring2(std::string s)
{
    std::vector<bool> data(256, false);
    int start = 0;
    int res = 0;
    int size = s.size();

    for(int i = 0; i< size; ++i)
    {
        if(data[s[i]])
        {
            res = std::max(res, i - start);

            while(s[start] != s[i])
            {
                data[s[start]] = false;
                ++start;
            }
            ++start;
        }
        else
            data[s[i]] = true;
    }
    return std::max(res, size - start);
}
