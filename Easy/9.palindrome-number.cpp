#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        string text = to_string(x);
        string text2 (text.size(), '_');
        int count = 0;
        for (int i = text.size()-1; i >= 0; i--){
            text2[count++] = text[i];
        }
        for (int i = 0; i < text.size(); i++){
            if (text2[i] != text[i]){
                return false;
            }
        }
        return true;
    }
};

