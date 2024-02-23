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


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // 랜덤 함수 사용하기 위해
#include <time.h> // 시간 설정

int Gresult(int u, int com) {
    int win[3][3] = {
        {0, -1, 1},  // 비김, 짐, 이김 주먹 경우의 수 00 01 02
        {1, 0, -1},  // 이김, 비김, 짐 보자기 경우의 수 10 11 12
        {-1, 1, 0}   // 짐, 이김, 비김 가위 경우의 수 20 21 22
    };
    return win[u][com];
}
int main() {
    int u = 0;
    while (1) {
        srand(time(NULL));
        int com = rand() % 3;  // 0 ~ 2까지 난수 선택 
        printf("0 바위, 1 보자기, 2 가위 : ");
        scanf("%d", &u);
        printf("com = %d, u = %d\n", com, u);

        int result = Gresult(u, com); // 함수 호출

        switch (result) {
        case 0:
            printf("draw\n");
            break;
        case 1:
            printf("win.\n");
            break;
        case -1:
            printf("lose.\n");
            break;
        default:
            printf("잘못 입력\n");
            break;
        }
    }

    return 0;
}

