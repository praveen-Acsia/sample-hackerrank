#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int minpartision(vector<int>& used, vector<int>& capacity) {

	int total_used = 0;
	int used_capacity = 0;
	int part_count = 0;
	for (int i = 0; i < used.size(); i++) {
		total_used += used[i];
	}
	sort(capacity.begin(), capacity.end(), greater<int>());
	for (int i = 0; i < capacity.size(); i++) {
		used_capacity += capacity[i];
		part_count++;
		if (used_capacity >= total_used) {
			return part_count;
		}
	}
	return part_count;
}


int main() {

	vector<int> used;
	vector<int> capacity;
	int ele;
	int nofp;
	cout << "enter the no of partision : " << endl;
	cin >> nofp;

	for (int i = 0; i < nofp; i++) {
		cin >> ele;
		used.push_back(ele);
	}
	for (int i = 0; i < nofp; i++) {
		cin >> ele;
		capacity.push_back(ele);
	}

	cout << minpartision(used, capacity);

}
