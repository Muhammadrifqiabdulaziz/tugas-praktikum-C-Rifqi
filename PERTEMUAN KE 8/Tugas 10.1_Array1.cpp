#include <stdio.h>

int main() {
    int A[11];
    int input;
    int index = 0;

    printf("Masukkan data:\n");
    while (1) {
        scanf("%d", &input);
        
        if (input == 999 || index >= 11) {
            break;
        }

        A[index] = input;
        index++;
    }

    printf("Isi array A:\n");
    for (int i = 0; i < index; i++) {
        printf("%d\n", A[i]);
	}
}

