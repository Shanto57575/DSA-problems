//problem : https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

vector<int> moveZeros(int n, vector<int> a) {
    
   vector<int>b;
   int cnt = 0;
   for(int i=0; i<n; i++){
       if(a[i]==0)cnt++;
       else b.push_back(a[i]);
   }

   while(cnt--){
       b.push_back(0);
   }
   return b;
}
