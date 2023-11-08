//problem : https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

vector<int> getFrequencies(vector<int>& v) {
    
    map<int,int>mp;
    for(int i=0; i<v.size(); i++){
        mp[v[i]]++;
    }
    
    vector<int>arr;
    for(auto u:mp)arr.push_back(u.second);
    
    sort(arr.begin(),arr.end());
    
    int mx = -1, mini = -1;

    for(auto u:mp){
        if(u.second==arr.back())
        {
            mx = u.first;
            break;
        }
    }

    for(auto u:mp){
        if(u.second==arr[0])
        {
            mini = u.first;
            break;
        }
    }
    
    return {mx,mini};
}
