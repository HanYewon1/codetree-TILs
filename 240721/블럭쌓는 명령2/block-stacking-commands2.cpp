#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, min, max;
    int arr[101] = {};
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> min >> max;
        for (int j = min; j <= max; j++)
            arr[j]++;
    }
    sort(arr, arr+n);
    cout << arr[n-1];
    return 0;
}