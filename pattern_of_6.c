#include <stdio.h>
#include <string.h>

int main() {
    int T, K;
    char pattern[6][4] = {"RGB", "GRB", "GBR", "BGR", "BRG", "RBG"};
    char output[1000][4]; 

    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &K);
        strcpy(output[i], pattern[K % 6]);
    }

    for (int i = 0; i < T; i++) {
        printf("%s\n", output[i]);
    }

    return 0;
}
