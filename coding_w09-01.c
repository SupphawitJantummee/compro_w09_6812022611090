#include <stdio.h>
int main () {

    int start_num, stop_num; // ประกาศตัวแปร start_num และ stop_num
    
        printf("Enter start number: "); // ใส่ค่า start_num
        scanf("%d", &start_num);
        printf("Enter stop number: "); // ใส่ค่า stop_num
        scanf("%d", &stop_num);
        printf("Start number is %d and stop number is %d\n", start_num, stop_num); // แสดงข้อความของค่าเริ่มต้นเเละค่าสิ้นสุด

        while (start_num>=stop_num){
            if (start_num>stop_num){
                printf("Your Start number is greater than Stop number, please try again!\n");
            } else {
                printf("Your Start number is equal to Stop number, please try again!\n");
            }

        printf("Enter start number: ");
        scanf("%d", &start_num);
        printf("Enter stop number: ");
        scanf("%d", &stop_num);
        printf("Start number is %d and stop number is %d\n", start_num, stop_num);

        }
        
        printf("\n----------------------------------------------\n\n");
        printf("Sequence from start to stop: ");

        while (start_num<=stop_num) { // ระบุให้ while ทำงานจนกว่า start_num จะมากกว่า stop_num
            printf("%d ", start_num); // แสดงค่าของ start_num จนกว่าจะถึงค่า stop_num ที่ผู้ใช้กำหนดไว้
            start_num+=1; // ให้บวก start_num ทีละ 1

        }


    printf("\nThank you.\n"); // แสดงข้อความขอบคุณ
    return 0;
}