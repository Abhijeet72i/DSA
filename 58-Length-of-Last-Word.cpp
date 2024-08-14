class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        
        // Start from the end and skip any trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        
        
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        
        return count;
    }
};
