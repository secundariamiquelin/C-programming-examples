#include <stdio.h>

// // int main() {
// //     int i;

// //     for (i = 1; i <= 10; i++) {
// //         if (i == 5) {
// //             break; // Sai do loop quando i for igual a 5
// //         }
// //         printf("%d ", i);
// //     }

// //     return 0;
// }

//CONTINUE

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Pula para a próxima iteração quando i for igual a 3
        }
        printf("%d ", i);
    }

    return 0;
}