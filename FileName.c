#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    char symbol;
    int size;

    printf("������� ������ ��� ��������� ��������: ");
    scanf(" %c", &symbol);  

    printf("������� ������ �������� (���������� ��������): ");
    scanf("%d", &size);

    if (size < 2) {
        printf("������ �������� ������ ���� �� ����� 2.n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("%c", symbol);  
            }
            else {
                printf(" ");  
            }
        }
        printf("\n");  
    }

    return 0;
}