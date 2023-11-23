#include <stdio.h>

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int index = 0;

    printf("Data yang disimpan dalam array A (hanya nilai genap):\n");
    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[index] = data[i];
            printf("%d\n", A[index]);
            index++;
        }
    }
    
    return 0;
}
