class Solution {
    public double[] convertTemperature(double celsius) {
        double ans[]={0,0};
         ans[1] = celsius*1.80 + 32.00;
        ans[0]= celsius +273.15;
     return ans;   
    }
}