#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year, month, day, hour, hoursToAdd;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &year);
    printf("���� �Է��ϼ���: ");
    scanf("%d", &month);
    printf("��¥�� �Է��ϼ���: ");
    scanf("%d", &day);
    printf("�ð��� �Է��ϼ���: ");
    scanf("%d", &hour);
    printf("�߰��� �ð��� �Է��ϼ���: ");
    scanf("%d", &hoursToAdd);

    hour += hoursToAdd;

    int daysToAdd = hour / 24;
    hour %= 24;

    day += daysToAdd;

    while (day > 31 || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) || (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? day > 29 : day > 28)) {
        day -= ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ? 30 : (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) ? 29 : 28;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    printf("���: %d�� %d�� %d�� %d��\n", year, month, day, hour);

    return 0;
}
