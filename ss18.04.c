#include <stdio.h>
#include <string.h>
int main() {
	struct Student {
    int id;          
    char name[50];     
    int age;          
    char phoneNumber[15];
};

    struct Student students[50];
    int numberOfStudents = 5;

    for (int i = 0; i < numberOfStudents; i++) {
        // Gán ID t? d?ng tang
        students[i].id = i + 1;

        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);

        printf("Nhap ten: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        printf("Nhap so dien thoai: ");
        scanf("%s", students[i].phoneNumber);

        printf("\n");
    }

    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}
