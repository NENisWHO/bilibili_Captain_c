/*************************************************************************
	> File Name: 4.student_system.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月08日 星期一 16时19分26秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>


const char *file_name = "student_system.txt";

//学生的结构体
typedef struct student {
    char name[20];
    int age;
    int class;
    double height;
}Student;

#define MAX_N 10000
Student stu_arr[MAX_N + 5];
int stu_cnt;

//从文件中读取数据
int read_from_file(Student *arr) {
    int i = 0; //统计读取了多少数据
    FILE *fp = fopen(file_name, "r");
    if(fp == NULL) return 0;
    while(fscanf(fp, "%s", arr[i].name) != EOF) {
        fscanf(fp, "%d%d%lf",
             &arr[i].age,
             &arr[i].class,
             &arr[i].height
        );
        i += 1;
    }
    fclose(fp);
    return i;
}
//写入文件中
void output_to_file(Student *stu_arr, int n) {
    FILE *fp = fopen(file_name, "a");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %d %.2lf\n", 
                stu_arr[i].name,
                stu_arr[i].age,
                stu_arr[i].class,
                stu_arr[i].height
        );
    }
    fclose(fp);
    return ;
}

void clear_file() {
    FILE *fp = fopen(file_name, "w");
    fclose(fp);
    return ;
}

void restor_data_to_file(Student *arr, int n){
    clear_file();
    output_to_file(arr, n);
    return ;
}

//////////////////////////

//列出学生列表
void list_students() {
    int len = printf("%4s|%10s|%4s|%6s|%7s|",
                    "id", "name", "age", "class", "height"
    );
    printf("\n");
    for(int i = 0; i < len; i++)  printf("=");
    printf("\n");
    for (int i = 0; i < stu_cnt; i++) {
        printf("%4d|%10s|%4d|%6d|%7.2lf|\n",
              i, stu_arr[i].name,
              stu_arr[i].age, stu_arr[i].class,
              stu_arr[i].height
        );
    }
    return ;
}

void add_a_student() {
    printf("add new item: (name, age, class, height)\n");
    printf("myspl->");
    scanf("%s%d%d%lf", 
        stu_arr[stu_cnt].name,
        &stu_arr[stu_cnt].age,
        &stu_arr[stu_cnt].class,
        &stu_arr[stu_cnt].height
    );   
    output_to_file(stu_arr + stu_cnt, 1);
    stu_cnt += 1;
    printf("add a new student success\n");
    return ;
}

void modify_a_student() {
    list_students();
    int id;
    do{
        printf("modify id: ");
        scanf("%d", &id);
    }while(id < 0 || id >= stu_cnt);
    printf("modify a item: (name, age, class, height)\n");
    printf("myspl->");
    scanf("%s%d%d%lf", 
        stu_arr[id].name,
        &stu_arr[id].age,
        &stu_arr[id].class,
        &stu_arr[id].height
    );   
    restor_data_to_file(stu_arr, stu_cnt);
    return ;
}

void delete_a_student() {
    if(stu_cnt == 0) {
        printf("there is no student\n");
        return ;
    } 
    list_students();
    int id;
    do{
        printf("modify id: ");
        scanf("%d", &id);
    }while(id < 0 || id >= stu_cnt);
    char s[100];
    printf("confim (y / n): ");
    getchar();
    scanf("%[^\n]", s);
    if (s[0] != 'y') return ;
    for(int i = id + 1; i < stu_cnt; i++) {
        stu_arr[i - 1] = stu_arr[i];
    }
    stu_cnt -= 1; 
    restor_data_to_file(stu_arr, stu_cnt);
    return ;
}

////////////////////////////
enum NO_TYPE {
    LIST = 1,
    ADD,
    MODIFY,
    DELETE,
    QUIT
};

int usage() {
    
    int no;
    do{
        printf("%d.list student\n", LIST);
        printf("%d.add a student\n", ADD);
        printf("%d.modify a student\n", MODIFY);
        printf("%d.delete a student\n", DELETE);
        printf("%d.quit\n", QUIT);
        printf("mysql->");
        scanf("%d", &no);
    }while(no < LIST || no > QUIT); //no在[1,5]取值时才退出usage函数
    return no;
}

int main() {
    stu_cnt = read_from_file(stu_arr);//文件中的学生总数
    while(1) {
        int no = usage();
        switch (no) {
            case LIST: {
                list_students();
            } break;
            case ADD: {
                add_a_student();
            } break;
            case MODIFY: {
                modify_a_student();
            } break;
            case DELETE: {
                delete_a_student();
            } break;
            case QUIT: printf("quit\n"); exit(0);
        }
        printf("\n");
    }
    return 0;
}
