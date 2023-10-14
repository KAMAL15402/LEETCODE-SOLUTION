class Solution {
public:
    void maxsolver(vector<int> & prices, int day, int& minpri,int& maxpro){
        //base
         if(day == prices.size()) return ;
        //sol for one case
        if(prices[day]<minpri) minpri = prices[day];
        int prepro = prices[day]-minpri;
         maxpro = max(maxpro,prepro);

        //recursive call
        maxsolver(prices,day+1,minpri,maxpro);

    }
    
    int maxProfit(vector<int>& prices) {
        int minpri = INT_MAX;
        int maxpro = INT_MIN;
        maxsolver(prices,0,minpri,maxpro);
        return maxpro;
    }
};