#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxtime(vector<int>& ptime, vector<int>& ttime) {

	long result;
	long time;
	int p = 0;
	long tpp = ttime.size() / ptime.size();

	sort(ptime.begin(), ptime.end());
	sort(ttime.begin(), ttime.end());
	
	result = ptime[p] + ttime[ttime.size()-1];

	for (long i = tpp; i < ttime.size(); i+=tpp) {

		p++;
		time = ptime[p] + ttime[(ttime.size() - 1) - i];
		if (result < time) { result = time; }
	}
	return result;
}

int main() {

	int nofp;
	vector <int> ptime;
	int noft;
	vector <int> ttime;
	int ele;

	cout << "enter no of processor" << endl;
	cin >> nofp;
	cout << "enter processor time" << endl;
	for (int i = 0; i < nofp; i++) {
		
		cin >> ele;
		ptime.push_back(ele);
	}
	cout << "enter no of task" << endl;
	cin >> noft;
	cout << "enter task times" << endl;
	for (int i = 0; i < noft; i++) {
		cin >> ele;
		ttime.push_back(ele);
	}

	cout << maxtime(ptime, ttime);
}
