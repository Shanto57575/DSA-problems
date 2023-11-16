// problem : https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&count=25&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

//Best approach
vector < int > sortedArray(vector < int > a, vector < int > b) {
    
    int i = 0, j = 0;
    int n = a.size(), m = b.size();

    vector<int>v;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(v.size()==0 || v.back()!=a[i]){
                v.push_back(a[i]);
            }
            i++;
        }
        else{
            if(v.size()==0 || v.back()!=b[j]){
                v.push_back(b[j]);
            }
            j++;
        }
    }

    while(i<n){
        if(v.back()!=a[i]){
            v.push_back(a[i]);
        }
        i++;
    }

    while(j<m){
        if(v.back()!=b[j]){
            v.push_back(b[j]);
        }
        j++;
    }
    return v;
}

//approach 2:

#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    set<int>s;
    for(auto u:a){
        s.insert(u);
    }
    for(auto u:b){
        s.insert(u);
    }
    vector<int>v;
    for(auto u:s){
        v.push_back(u);
    }
    return v;
}
