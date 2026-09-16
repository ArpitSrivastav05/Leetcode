class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> count;
        
        // Count characters in magazine
        for(char c : magazine){
            count[c]++;
        }
        
        // Check ransomNote requirements
        for(char c : ransomNote){
            if(count[c] == 0) return false; // not enough chars
            count[c]--;
        }
        
        return true;
    }
};
