class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int res = 0;
        int n = s.size();
        unordered_map<int,char>umap;

        for(int high = 0; high<n; high++){
            umap[s[high]]++;
            int k = high - low + 1;

            while(umap.size() < k){
                umap[s[low]]--;

                if(umap[s[low]]==0){
                    umap.erase(s[low]);
                }
                low++;

                k = high - low + 1;
            }
            int len = high - low + 1;
            res = max(res,len);
        }
        return res;
    }
};