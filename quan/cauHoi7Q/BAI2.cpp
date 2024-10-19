#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[45];
    unordered_map<int, int> dem;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dem[a[i]]++;
    }

    int demm = 0;
    int cao = 0;

    for (const auto& pair : dem) {
        if (pair.second > demm) {
            demm = pair.second;
            cao = pair.first;
        }
    }

    cout<<demm<<" "<<cao<<endl;

    return 0;
}
