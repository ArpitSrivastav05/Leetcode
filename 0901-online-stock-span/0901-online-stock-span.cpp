class StockSpanner {
    private:
    stack<pair<int,int>> st; // store{price,span}
public:
    StockSpanner() {
        //ye empty stack banayega
    }
    
    int next(int price) {
        int span = 1;
        while(!st.empty()&&st.top().first<=price){//jb top ka price <= current price
            span+=st.top().second;// add karenge previous sapn
            st.pop();
        }
        st.push({price,span});//pushing current price with span
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */