/*************************************************************************
	> File Name: 17.struct.c
	> Author: 
	> Mail: 
	> Created Time: 2024年04月06日 星期六 14时16分41秒
 ************************************************************************/

#include<stdio.h>

typedef struct person{
    char name[20];
    int age;
    char gender;
    float height;
}person;

void output(struct person *p) {      
    printf("user point p : (%s, %d, %c, %f)\n",
           p->name, 
           p->age, 
           p->gender, 
           p->height
    );
    return ;
}

void set_buff(char *buff, void *head, void *begin, void *end, char ch) {
    
    while (begin != end){
        buff[begin - head] = ch;
        begin += 1;
    }
    return ;
}

void output_person() {
    int n = sizeof(struct person);
    char buff[n];
    for (int i = 0; i < n; i++) buff[i] = '.';
    int len = 0;
    for(int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for(int i = 0; i < len; i++) printf("-");
    printf("\n");
    struct person hug;
    set_buff(buff, hug.name, hug.name, 20 + (void *)hug.name, 'n');
    set_buff(buff, hug.name, &hug.age, 4 + (void *)&hug.age, 'a');
    set_buff(buff, hug.name, &hug.gender, 1 + (void *)&hug.gender, 'g');
    set_buff(buff, hug.name, &hug.height, 4 + (void *)&hug.height, 'h');
    for(int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return ;
}


int main() {
    struct person hug = {"zhangsan", 18, 'M', 1.80};
    person su = {"Su", 20, 'M', 1.79};
    printf("(%s, %d, %c, %f)\n", hug.name, hug.age, hug.gender, hug.height);
    output(&hug);
    output(&su);

    printf("sizeof(struct person):%lu\n", sizeof(struct person));
    output_person();
    return 0;
}
