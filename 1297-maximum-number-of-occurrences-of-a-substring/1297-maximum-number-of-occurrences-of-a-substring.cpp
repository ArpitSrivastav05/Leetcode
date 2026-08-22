class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int> freq;
        int n = s.size();
        int res = 0;

        for(int i = 0;i+minSize<=n;i++){
            string sub = s.substr(i,minSize);

            unordered_set<char>uniqueChars(sub.begin(),sub.end());
            if(uniqueChars.size() <= maxLetters) {
                freq[sub]++;
                res = max(res, freq[sub]);
            }
        }
        return res;
    }
};