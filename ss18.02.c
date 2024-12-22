#include <stdio.h>
int main() {
	struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};
    struct Student student;
    printf("Nhap thong tin sinh vien:\n");

    printf("Nhap ten: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &student.age);

    printf("Nhap so dien thoai: ");
    scanf("%s", student.phoneNumber);

    // In thông tin sinh viên ra màn hình
    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %s\n", student.phoneNumber);

    return 0;
}
