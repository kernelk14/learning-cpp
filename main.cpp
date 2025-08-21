#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>

using namespace std;

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

void bubbleSortHandler() {
    vector<int> arr;
    for (int i = 0; i < rand(); i++) {
        arr.push_back(rand() % 501);
    }
    bubbleSort(arr);
    for (auto a: arr) {
        cout << a << " ";
    }
    cout << endl;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        cout << "You need to provide an argument.\n";
    } else {
        if (strcmp(argv[1], "-bs") == 0) {
            cout << "-bs triggered\n";
            bubbleSortHandler();
        }
    }
    return 0;
}
