#include <stdio.h>
int main() {
	struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};
    struct Student student = {"Nguyen Vu Hoang", 18, "0898328021"};

    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %s\n", student.phoneNumber);

    return 0;
}
