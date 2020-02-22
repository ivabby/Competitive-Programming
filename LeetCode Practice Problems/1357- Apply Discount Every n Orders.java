class Cashier {
    int n,dis,cnt;
    HashMap<Integer , Integer> hmap = new HashMap<>();
    public Cashier(int n, int discount, int[] products, int[] prices) {
        this.n = n;
        dis = discount;
        for(int i=0;i<products.length;i++)
            hmap.put(products[i] , prices[i]);
        cnt = 0;
    }
    
    public double getBill(int[] product, int[] amount) {
        cnt = (cnt + 1)%n;
        double tot = 0;
        for(int i=0;i<product.length;i++)
        {
            tot = tot + (hmap.get(product[i]) * amount[i]);
        }
        if(cnt == 0)
        {
            tot = (double)(tot *(1 - dis/(double)100));
        }
        
        return tot;
    }
}
