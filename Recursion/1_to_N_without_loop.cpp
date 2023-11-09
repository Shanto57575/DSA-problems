int cnt = 1;
void print(vector<int>&v, int x){
   if(cnt==x){
       v.push_back(cnt);
       return;
   }
   v.push_back(cnt);
   cnt++;
   print(v,x);
}

vector<int>printNos(int x) {
    vector<int>v;
    print(v,x);
    return v;
}
