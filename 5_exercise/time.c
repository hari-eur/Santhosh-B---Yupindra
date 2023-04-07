#include <stdio.h>

struct time 
{
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

main() 
{
    struct time t;
    printf("Enter the time in the format (HH:MM:SS DD/MM/YYYY): ");
    scanf("%d:%d:%d %d/%d/%d", &t.hours, &t.minutes, &t.seconds, &t.day, &t.month, &t.year);
    printf("Time entered: %02d:%02d:%02d %02d/%02d/%04d\n", t.hours, t.minutes, t.seconds, t.day, t.month, t.year);
    printf("Sizeof struct time: %zu bytes\n", sizeof(struct time));
}
