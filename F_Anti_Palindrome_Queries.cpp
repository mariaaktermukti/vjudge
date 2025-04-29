#include <cstdio>

const int MAXN = 200005;
int prefix1[MAXN], prefix2[MAXN], prefix3[MAXN];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, Q;
        scanf("%d %d", &N, &Q);

        int A[MAXN];
        prefix1[0] = prefix2[0] = prefix3[0] = 0;

        for (int i = 1; i <= N; ++i) {
            scanf("%d", &A[i]);
            prefix1[i] = prefix1[i - 1] + (A[i] == 1);
            prefix2[i] = prefix2[i - 1] + (A[i] == 2);
            prefix3[i] = prefix3[i - 1] + (A[i] == 3);
        }

        while (Q--) {
            int L, R;
            scanf("%d %d", &L, &R);
            int len = R - L + 1;
            int cnt1 = prefix1[R] - prefix1[L - 1];
            int cnt2 = prefix2[R] - prefix2[L - 1];
            int cnt3 = prefix3[R] - prefix3[L - 1];

            if (len % 2 == 1) {
                printf("No\n");
            } else {
                int half = len / 2;
                if (cnt1 > half || cnt2 > half || cnt3 > half) {
                    printf("No\n");
                } else {
                    printf("Yes\n");
                }
            }
        }
    }
    return 0;
}
