#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year, month, day, hour, hoursToAdd;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);
    printf("월을 입력하세요: ");
    scanf("%d", &month);
    printf("날짜를 입력하세요: ");
    scanf("%d", &day);
    printf("시간을 입력하세요: ");
    scanf("%d", &hour);
    printf("추가할 시간을 입력하세요: ");
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

    printf("결과: %d년 %d월 %d일 %d시\n", year, month, day, hour);

    return 0;
}
