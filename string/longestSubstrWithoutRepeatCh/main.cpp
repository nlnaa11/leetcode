
// test

#include <iostream>
#include <string>

int lengthOfLongestSubstring1(std::string s);
int lengthOfLongestSubstring2(std::string s);

int main(int argc, char* argv[])
{
    std::string s = "abcabcbb";
    std::cout << "string: " << s << '\n';

    std::cout << "length of longest substring: ";
    std::cout << lengthOfLongestSubstring1(s) << '\n';
  
    s = "bbbbb"; 
    std::cout << "string: " << s << '\n';

    std::cout << "length of longest substring: ";
    std::cout << lengthOfLongestSubstring2(s) << '\n';
    
    s = "pwwkew"; 
    std::cout << "string: " << s << '\n';

    std::cout << "length of longest substring: ";
    std::cout << lengthOfLongestSubstring2(s) << '\n';

    s = ""; 
    std::cout << "string: " << s << '\n';

    std::cout << "length of longest substring: ";
    std::cout << lengthOfLongestSubstring2(s) << '\n';
   
    return 0;
}
