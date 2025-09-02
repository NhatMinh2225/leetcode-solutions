class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string base;

        int count = 0;
        size_t array_size = strs.size();
        size_t first_numb_size = strs[0].size();
        for (size_t i = 0; i < first_numb_size ; i++){
            bool continues = true;
            for(size_t j = 1; j < array_size ; j++){
                if (strs[j][i] != strs[0][i] && count == 0){
                    return "";
                }
                else if (strs[j][i] != strs[0][i] ){
                    continues = false;
                    break;
                }
                }
            if (continues){
                base += strs[0][i];
                count ++;
            }
            else{
                return base;
            }
            }
                return base;
        }

};
