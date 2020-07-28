int knapsack(int wt[],int val[],int w,int n){
  int k[w+1][n+1];
  for(int i=0;i<=w;++)
  {
    for(int j=0;j<=n;j++)
    {
      if(i==0 ||j==0)
      {
        k[i][j]=0;
      }
      else if(wt[j-1]<=w)
      {
        k[i][j]=max(val[j-1] +k[i - wt[j- 1]][j-1],k[i][j-1];
      }
      else
      {
        k[i][j] = k[i][j-1];
      }
    }
  }
  return k[w][n];
}
      
        
  
