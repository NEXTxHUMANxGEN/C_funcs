#include <stdio.h>
#include <stdlib.h>
#define matrix_max 100

int input_values(int *a, int n);
int static_memory_first(int *arr, int n_x, int n_y);
int dynam_memory_first(int *arr, int n_x, int n_y);
int dynam_memory_second(int *arr, int n_x, int n_y);
int dynam_memory_third(int *arr, int n_x, int n_y);

int main() {
    int n, key, n_x, n_y;
    int *data;
    if (scanf("%d", &key) != 1) {
        printf("n/a\n");
    } else {
        switch(scanf("%d", &key)) {
            case 1:
                if (scanf("%d %d", &n_x, &n_y) == 1) {
                    if (scanf("%d", &n) != 1) {
                        printf("n/a\n");
                    } else {
                        if (input_values(data, n) == 21) {
                            printf("n/a\n");
                        }
                    printf("n/a\n");
                    break;
                    return 0;
                }
                static_memory_first(data, n_x, n_y);
                break;
                } else {
                    printf("n/a\n");
                    break;
                }
            case 2:
                if (scanf("%d %d", &n_x, &n_y) == 1) {
                    if (scanf("%d", &n) != 1) {
                        printf("n/a\n");
                    } else {
                        if (input_values(data, n) == 21) {
                            printf("n/a\n");
                        }
                    printf("n/a\n");
                    break;
                    return 0;
                }
                dynam_memory_first(data, n_x, n_y);
                break;
                } else {
                    printf("n/a\n");
                    break;
                }
            case 3:
                if (scanf("%d %d", &n_x, &n_y) == 1) {
                    if (scanf("%d", &n) != 1) {
                        printf("n/a\n");
                    } else {
                        if (input_values(data, n) == 21) {
                            printf("n/a\n");
                        }
                    printf("n/a\n");
                    break;
                    return 0;
                }
                dynam_memory_second(data, n_x, n_y);
                break;
                                    } else {
                    printf("n/a\n");
                    break;
                }
                
            case 4:
                if (scanf("%d %d", &n_x, &n_y) == 1) {
                    if (scanf("%d", &n) != 1) {
                        printf("n/a\n");
                    } else {
                        if (input_values(data, n) == 21) {
                            printf("n/a\n");
                        }
                    printf("n/a\n");
                    break;
                    return 0;
                    }
                dynam_memory_third(data, n_x, n_y);
                break;
                    } else {
                    printf("n/a\n");
                    break;
                }
            default :
                printf("n/a\n");
                break;
                return 0;
                                    }
                        }
        return 0;
}

int input_values(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
            if (scanf("%d", p) != 1) {
                return 21;
                break;
            }
        } return 0;
    }

void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        printf("%d ", *p);
    }
}


//Нужно выделить 4 функции под каждый способ выделяемой памяти!


//Статистический(задаём максимальный размер и используем матрицу в рамках \того размера)
int static_memory_first(int *arr, int n_x, int n_y){
    if ((n_x > matrix_max) || (n_y > matrix_max)) {
        return 21;
    } else {
        int M = n_y;
        int N = n_x;
        
        int** pointer_array = malloc(M * sizeof(int*));
        for (int i = 0; i < M; i++) {
            pointer_array[i]= malloc (N * sizeof(int));
        }
            int count = 0;
        for (int i = 0; i < n_y; i++) {
            for (int j = 0;j < n_x; j++) {
                if (count > n_x) {
                    continue;
                } else {
                    pointer_array[i][j] = arr[count];
                    count += 1;
                }
            }
        }
    }return 0;
}




//Динамический_1_в одну линию с указателями из другого массива ?
int dynam_memory_first(int *arr, int n_x, int n_y) {
    if ((n_x > matrix_max) || (n_y > matrix_max)) {
        return 21;
    } else {
        int M = n_y;
        int N = n_x;
        
        int** pointer_array = malloc(M * sizeof(int*));
        for (int i = 0; i < M; i++) {
            pointer_array[i]= malloc (N * sizeof(int));
        }
        int count = 0;
        for (int i = 0; i < n_y; i++) {
            for (int j = 0;j < n_x; j++) {
                if (count > n_x) {
                    continue;
                } else {
                    pointer_array[i][j] = arr[count];
                    count += 1;
                }
            }
        }
                    
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", pointer_array[i][j]);
            }
        }
        for (int i = 0; i < M; i++) {
            free(pointer_array[i]);
        }
        free(pointer_array);
    } return 0;
}




//Динамическкий_2_в одну линию с указателями в начале ?
int dynam_memory_second(int *arr, int n_x, int n_y) {
    if ((n_x > matrix_max) || (n_y > matrix_max)) {
        return 21;
    } else {
    int M = n_y;
    int N = n_x;
    int** pointer_array = malloc(M * sizeof(int*));
    int* arr = malloc (M * N * sizeof(int));
    
    for (int i = 0; i < M; i++) {
        int** pointer_array[i] = arr + N * i;
    }
    int count = 0;
    for (int i = 0; i < n_y; i++) {
        for (int j = 0;j < n_x; j++) {
            if (count > n_x) {
                continue;
            } else {
                pointer_array[i][j] = arr[count];
                count += 1;
            }
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", pointer_array[i][j]);
        }
    }
    free(values_array);
    free(pointer_array);
    }return 0;
}
// Динамический_3_???
int dynam_memory_third(int *arr, int n_x, int n_y) {
    if ((n_x > matrix_max) || (n_y > matrix_max)) {
        return 21;
    } else {
    int M = n_y;
    int N = n_x;
    int** single_array_matrix = malloc(M * N * sizeof(int) + M * sizeof(int*));
    int* ptr = (int*) (single_array_matrix + M);

    for (int i = 0; i < M; i++) {
        single_array_matrix[i] = ptr + N * i;
    }
    int count = 0;
    for (int i = 0; i < n_y; i++) {
        for (int j = 0;j < n_x; j++) {
            if (count > n_x) {
                continue;
            } else {
                pointer_array[i][j] = arr[count];
                count += 1;
            }
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", single_array_matrix[i][j]);
        }
    }
    free(single_array_matrix);
    }return 0;
}
