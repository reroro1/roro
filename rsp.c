#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int user = 0;
    int a = 0;
    srand(time(NULL));
    printf("s(1), r(2), p(3) : ");
    scanf("%d", &user);

    while (1) {
        int com = rand() % 3 + 1;
        printf("com = %d, user = %d\n", com, user);
        if (com == user) {
            printf("draw\n");
        }
        else if (((com - user + 3) % 3 == 1)) { 
            printf("lose\n");
        }
        else {
            printf("win\n");
        }
        printf("\n stop 4: ");
        scanf("%d", &a);
        if (a == 4) {
            break;
        }
        printf("s(1), r(2), p(3) : ");
        scanf("%d", &user);
    }

    return 0;
}
