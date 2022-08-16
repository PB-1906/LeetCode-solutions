class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack==needle) {
            return 0;
        }
        if(needle.size()==0)return 0;
        int needleLength = needle.size();
        for (int i = 0; i < haystack.size() ; i++) {
            if (haystack.substr(i, needleLength)==needle) {
                return i;
            }
        }
        return -1;
    }
};