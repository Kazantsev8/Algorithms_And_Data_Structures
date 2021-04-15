#include <stdio.h>

void firstTask();

void firstTask()
{
    printf("first task\n");
    //*Количество маршрутов с препятствиями. Реализовать чтение массива с препятствием и нахождение количество маршрутов.
    //задание 1
    int N = 0, M = 0;

    printf("Input parameters for NxM road matrix\n");
    printf("format N-M, like 3-3 : \n");
    scanf("%d-%d", &N, &M);

    printf("1 - we can move\n");
    printf("0 - we cannot move\n");
    printf("\n");

    int** roadBoard = (int**)malloc(N * M * sizeof(int));
    int value, i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Input value 1 or 0 for [%d]x[%d] : \n", i, j);
            scanf("%d", &value);
            if ((value > 1) || (value < 0))
                roadBoard[i][j] = 1;
            else
                roadBoard[i][j] = value;
        }
    }
    printf("\n");
    printf("values : \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%d  ", roadBoard[i][j]);
        printf("\n");
    }
    roadBoard[0][0] = 1;
    for (i = 1; i < N - 1; i++) {
        if (roadBoard[i][0] == 0)
            roadBoard[i + 1][0] = 0;
    }
    for (j = 1; j < M - 1; j++) {
        if (roadBoard[0][j] == 0)
            roadBoard[0][j + 1] = 0;
    }
    printf("\n");
    printf("matrix : \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%d  ", roadBoard[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 1; i < N; i++) {
        for (j = 1; j < M; j++)
            if (roadBoard[i][j] != 0)
                roadBoard[i][j] = roadBoard[i][j - 1] + roadBoard[i - 1][j];
    }
    printf("\n");
    printf("count matrix : \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%d     ", roadBoard[i][j]);
        printf("\n");
        printf("\n");
    }
    printf("\n");
    printf("\n");

}

int main(int argc, const char* argv[]) {

    firstTask();

    return 0;
}