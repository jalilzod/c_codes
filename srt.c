#define N 25
int main(void)
{
    int n[N];
    int x;
    int i;

    for (i = 0; i < N; i++) {
        n[i] = 1;
    }
    for (x = 2; x <= N; x++) {
        if (n[x]) {
            for (i = 2; i * x < N; i++) {
                n[i * x] = 0;
            }
        }
    }
    for (i = 2; i < N; i++) {
        if (n[i]) {
            printf("%d\t", i);
        }
    }
    printf("\n");

    return 0;
}
