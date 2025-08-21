#include <iostream>
#include <vector>
using namespace std;

// Initializing a function in a class
class Sorts {
	public:
		void bubbleSort(vector<int> &v) {
			int n = v.size();
			for (int i = 0; i < n - 1; i++) {
				for (int j = 0; j < n - i - 1; j++) {
					if (v[j] > v[j+1]) {
						swap(v[j], v[j+1]);
					}
				}
			}
		}
		Sorts() {}
		Sorts(vector<int> &v) {
			bubbleSort(v);
		}
};

int main() {
	Sorts s;
	vector<int> arr = {234, 65, 9, 243, 664};
	s.bubbleSort(arr);

	vector<int> arr2 = {456, 76, 3, 876, 98};
	Sorts s2(arr2);
	return 0;
}
