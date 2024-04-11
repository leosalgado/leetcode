int maxProfit(int* prices, int pricesSize) {
    int left = 0, right = 1;
    int max = 0, profit;

    while(right < pricesSize){
        if(prices[left] < prices[right]){
            profit = prices[right] - prices[left];
            max = max > profit ? max : profit;
        }
        else{
            left = right;
        }
        right++;
    }
    return max;
}
