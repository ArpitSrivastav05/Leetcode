class Solution {
public:
    int removePalindromeSub(string s) {
        int i = 0;
        int j = s.size()-1;
        int count = 0;
        while(i<j){
            if(s[i]!=s[j]){
                return 2;//kyuki isme sirf a aur b hi hai 
            }
            i++;
            j--;

        }
        return 1;//agar pura s hi pailindrome hua to
    }
};