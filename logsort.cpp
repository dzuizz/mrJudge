#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void quickSort(int l, int r) {
    if (l >= r) return;
    int i = l, j = r;
    int pivot = v[(l + r) / 2];
    while (i <= j) {
        while (v[i] < pivot) i++;
        while (v[j] > pivot) j--;
        if (i <= j) swap(v[i++], v[j--]);
    }
    quickSort(l, j);
    quickSort(i, r);
}

int main() {
    int n; cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    quickSort(0, n - 1);

    for (int i = 0; i < n; i++) cout << v[i] << '\n';
}