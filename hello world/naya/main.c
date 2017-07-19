#include <stdio.h>
#include <stdlib.h>


struct family{
        int salary;
        char name[10];
};
int main(){
    struct family baba;
    baba.salary = 10000;
    strcpy(baba.name, "sandeep");
    printf("%d\n", baba.salary);
    printf("%s", baba.name);
}
