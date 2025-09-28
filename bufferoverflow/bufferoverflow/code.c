#include <stdio.h>
#define STR_LEN 10

struct Student {
    char id[STR_LEN+1];
    char degree[STR_LEN+1];
};

int main(int argc, char **argv) {
    struct Student student = {"", "Trung Binh"};
    printf("Ket qua hoc tap: Bang tot nghiep loai %.*s\n", STR_LEN, student.degree);

    printf("Nhap ma sinh vien: ");
    scanf(" %s", student.id);

    printf(
	"Chuc mung sinh vien %.*s da tot nghiep voi Bang loai %.*s\n",
	STR_LEN, student.id, STR_LEN, student.degree
    );
    return 0;
}
