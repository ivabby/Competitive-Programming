/* The functions which 
builds the segment tree */
void build(int *a,int *t,int v,int tl,int tr)
{
    if(tl == tr)
        t[v] = a[tl];
    else
    {
        int tm = (tl+tr)/2;
        build(a,t,v*2+1,tl,tm);
        build(a,t,v*2+2,tm+1,tr);
        t[v] = min(t[v*2 + 1] , t[v*2+2]);
    }
}
int *constructST(int arr[],int n)
{
  //Your code here
  int sz = 2*pow(2 , ceil(log2(n))) - 1;
  int *t = new int[sz];
  
  build(arr,t,0,0,n-1);
  
  return t;
}


/* The functions returns the
 min element in the range
 from a and b */
 long long find(int t[],int v,int tl,int tr,int l,int r)
 {
     if(l > r) return LONG_MAX;
     if(l == tl && r == tr) return t[v];
     int tm = (tl+tr)/2;
     return min(find(t,v*2+1,tl,tm,l,min(tm , r)) , find(t,v*2+2,tm+1,tr,max(tm+1,l),r));
 }
int RMQ(int st[] , int n, int a, int b)
{
//Your code here
    return find(st,0,0,n-1,a,b);
}
