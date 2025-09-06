#include <stdio.h>
int main () {
    int i=2; //ระบุค่าตัวแปร i ให้เท่ากับ 2

    while (i<=10) { //กำหนดให้ while ทำงานในกรณีที่ i น้อยกว่าหรือเท่ากับ 10
        printf("%d ",i); // แสดงค่า i จนกว่าค่าจะมากกว่า 10
        i+=2; // ให้ค่าของ i บวกทีละสอง
    }

    printf("\n\nEnd of loop\n"); // แสดงข้อความจบ loop
    return 0;
}