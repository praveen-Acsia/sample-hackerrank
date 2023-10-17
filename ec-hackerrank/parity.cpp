#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

void largest_num(string num) {

	int key = 0;
	unordered_map <int, string> umap;
	string result;
	umap[key].push_back(num[0]);
	for (int i = 1; i < num.length(); i++) {
		
		if ((num[i] - '0') % 2 == 0) {
			if ((num[i - 1] - '0') % 2 != 0)
				key++;

			umap[key].push_back(num[i]);
		}
		else {
			if ((num[i - 1] - '0') % 2 != 1)
				key++;

			umap[key].push_back(num[i]);
		}
	}
	for (int i = 0; i <= key; i++) {
		sort(umap[i].begin(), umap[i].end(), greater<char>());
		result += umap[i];
	}
	cout << result;
}

int main() {

	string num;
	cout << "enter the number " << endl;
	cin >> num;
  
	/*cout << largest_num(num);*/
	largest_num(num);
}
