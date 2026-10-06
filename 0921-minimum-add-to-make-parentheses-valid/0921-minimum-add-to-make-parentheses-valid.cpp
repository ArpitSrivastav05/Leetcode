class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;//count for '('
        int add = 0;//count for needed insertion

        for(char c: s){
            if(c=='('){
                open++;
            }
            else{//c== ')'
                if(open>0){
                    open--;//match with prev'('
                }else{
                    add++;//need extra '(' for this ')'
                }
            }
        }
        return open + add;
    }
};