#include<stdio.h>

struct student {
    char name[30];
    float marks[4];
};

void display(int x, struct student s[]) {
    int selected_student_no, i;
    printf("Enter the student number (1-%d) you would like to check: ", x);
    scanf("%d", &selected_student_no);
    selected_student_no--; // adjust for zero indexing
    
    printf("The selected student name is: %s\n", s[selected_student_no].name);
    for (i = 0; i < 4; i++) {
        printf("# %f ", s[selected_student_no].marks[i]);
    }
    printf("\n");
}

int main() {
    int i, k, no_of_students = 3;
    struct student Students[no_of_students];
    
    for (i = 0; i < no_of_students; i++) {
        printf("Enter student number %d name: ", i + 1);
        scanf("%s", Students[i].name);
        for (k = 0; k < 4; k++) {
            printf("Enter module no. %d mark: ", k + 1);
            scanf("%f", &Students[i].marks[k]);
        }
    }
    
    display(no_of_students, Students);
    printf("Thanks for using this program.\n");
    return 0;
}
