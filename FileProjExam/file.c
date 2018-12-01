#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[20];
	char score;
} Student;

int main(void) {
	int n=0, sum = 0;
	char * arglist = "";
	FILE *fp;
	fp = fopen("input.txt", "r");
	fscanf(fp, "%d", &n);
	printf("%d\n", n);
	Student *student = (Student*)malloc(sizeof(Student)*n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s %d", &((student + i)->name), &((student + i)->score));
		printf("이름 %s, 성적: %d\n", (student+i)->name, (student+i)->score);
	}

	
	system("pause");
	return 0;
}