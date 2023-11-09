//problem : https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int cnt = 1;

void printNames(vector<string> &names, int n){
	if(cnt==n){
		names.push_back("Coding Ninjas");
		return;
	}
	names.push_back("Coding Ninjas");
	cnt++;
    printNames(names, n);
}

vector<string> printNTimes(int n) {
	vector<string>names;
	printNames(names,n);
	return names;
}
