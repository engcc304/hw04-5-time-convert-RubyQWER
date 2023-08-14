#include <stdio.h>
int main() {
    int days;
    
    printf("Input Days: ");
    scanf("%d", &days);
    
    int seconds = days * 24 * 60 * 60; // 1 วัน = 24 ชั่วโมง * 60 นาที * 60 วินาที

    printf("%d days = %d seconds\n", days, seconds);
    
    return 0;
}

