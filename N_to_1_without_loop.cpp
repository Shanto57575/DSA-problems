//problem : https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

int cnt = 1;

void print(vector<int> &v, int x){
   if(cnt==x){
      v.push_back(1);
      return;
   }
   v.push_back(x);
   x--;
   print(v,x);
}
vector<int> printNos(int x) {
   vector<int>v;
   print(v,x);
   return v;
}
