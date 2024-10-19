#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("BAI3.INP","r", stdin);
	freopen("BAI3.OUT","w",stdout);
    const int MAX_SIZE_A = 100;
    const int MAX_SIZE_B = 100;
    int A[MAX_SIZE_A], B[MAX_SIZE_B], C[MAX_SIZE_A + MAX_SIZE_B];
    int N, M;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    for (int i = 0; i < N; ++i) {
        C[i] = A[i];
    }
    for (int i = 0; i < M; ++i) {
        C[N + i] = B[i];
    }

    sort(C, C + N + M);

    for (int i = 0; i < N + M; ++i) {
        cout << C[i] << " ";
    }

    return 0;
}
