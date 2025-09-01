#include <stdio.h>

int main() {
int start, stop;

// รับค่าเริ่มต้นและค่าสุดท้ายจากผู้ใช้
printf("Enter start number: ");
scanf("%d", &start);
printf("Enter stop number: ");
scanf("%d", &stop);

// แสดงค่า start และ stop
printf("Start number is %d and stop number is %d\n", start, stop);
printf("---\n");

// แสดงลำดับตัวเลขจาก start ถึง stop
printf("Sequence from start to stop: ");
for (int i = start; i <= stop; i++) {
printf("%d ", i); // แสดงตัวเลขปัจจุบัน
}

printf("\nThank you.\n"); // แสดงข้อความขอบคุณ

return 0; // สิ้นสุดโปรแกรม
}

/*
คำอธิบายโปรแกรม:
1. ประกาศตัวแปร start และ stop สำหรับเก็บค่าที่ผู้ใช้ป้อน
2. รับค่า start number และ stop number จากผู้ใช้ด้วยฟังก์ชัน scanf
3. แสดงค่า start และ stop ที่ผู้ใช้ป้อน
4. ใช้ for loop เพื่อแสดงลำดับตัวเลขจาก start ถึง stop:
- เริ่มต้นที่ i = start
- ทำงานเมื่อ i <= stop
- เพิ่มค่า i ขึ้นทีละ 1 ในแต่ละรอบ
5. ในแต่ละรอบของลูป แสดงค่าปัจจุบันของ i
6. หลังจากแสดงลำดับตัวเลขแล้ว แสดงข้อความ "Thank you."
7. ส่งค่า 0 กลับเพื่อระบุว่าโปรแกรมทำงานสำเร็จ
*/