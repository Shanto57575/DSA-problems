// https://www.codingninjas.com/studio/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&count=25&page=5&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

vector<int>superiorElements(vector<int>&a) {

    vector<int>v;
    int n = a.size();
    int mx = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]>mx)
        {
            v.push_back(a[i]);
            mx = a[i];
        }
    } 

    return v;
}
