#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <logger.h>
#define ENG 26

char name[500];
void append_file();
void read_file();
void caesar_cipher(int n, char *adres);
void cipher_zero(char *adres);

int main() {
    int res = 0;
    int n;
    char m1_c_adress[] = "../src/ai_modules/m1.c";
    char m2_c_adress[] = "../src/ai_modules/m2.c";
    char m1_h_adress[] = "../src/ai_modules/m1.h";
    char m2_h_adress[] = "../src/ai_modules/m2.h";
    
    FILE* log_init(char *filename);
    
#if T == 0
    while (res != -1) {
        if (scanf("%d", &res) == 1) {
            switch (res) {
                case 1:
                    read_file();
                    break;
                case 2:
                    append_file();
                    break;
                case 3:
                    scanf("%d", &n);
                    caesar_cipher(n, m1_c_adress);
                    caesar_cipher(n, m2_c_adress);
                    cipher_zero(m1_h_adress);
                    cipher_zero(m2_h_adress);
                    break;
                case -1:
                    break;
                default:
                    printf("n/a\n");
                    break;
            }
        } else {
            char c[100];
            scanf("%s", c);
            if (c[0]) {
            printf("n/a\n");
            continue;
            }
        }
    }
#endif
    return 0;
}
void read_file() {
    char line[500];
    scanf("%s", name);
    FILE *f = fopen(name, "r");
    if (f == NULL) {
        printf("n/a\n");
    } else {
        char x = getc(f);
        if (f != NULL && x != EOF) {
            printf("%c", x);
            while (!feof(f)) {
                if (fgets(line, 500, f) != NULL) {
                    printf("%s", line);
                    printf("\n");
                }
            }
        } else {
            printf("n/a\n");
        }
    }
    fclose(f);
    logcat(FILE* log_file, char *message, log_level level);
}
void append_file() {
    char line[500];
    char appender[500];
    scanf("%[^\n]%*c", appender);
    FILE *f = fopen(name, "r");
    if (f == NULL) {
        printf("n/a\n");
    } else {
        fclose(f);
        f = fopen(name, "a");
        fprintf(f, "%s", appender);
        fclose(f);
        f = fopen(name, "r");
        if (f == NULL) {
            printf("n/a\n");
        } else {
            char x = getc(f);
            if (x != EOF) {
                printf("%c", x);
                while (!feof(f)) {
                    if (fgets(line, 500, f) != NULL) {
                        printf("%s", line);
                        printf("\n");
                    }
                }
            } else {
                printf("n/a\n");
            }
        }
        fclose(f);
    }
}
    fclose(fp1);
    fclose(fp2);
    remove("output.txt");
}
void cipher_zero(char *adres) {
    FILE *f;
    f = fopen(adres, "w");
    fclose(f);
}
