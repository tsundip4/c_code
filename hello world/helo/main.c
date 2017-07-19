#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//    int a, b, c;
//    printf("put all three number: ");
//    scanf("%d %d %d", &a, &b, &c);
//    if(a>b && a>c)
//        printf("the greatest number is a", a, b, c);
//        else if(b>c && b>a)
//            printf("the greatest number is b", a, b, c);
//        else
//            printf("c is greater");
//    return 0;
//}


//int main()
//{
//    char* name;
//    name = (char*)malloc(11*sizeof(char));
//    strcpy(name, "sandeep1234");
//    printf("name = %s\n", name);
//    name = (char*)realloc(name, 15);
//    strcpy(name, "sandeep1");
//    printf("name = %s\n", name);
//    free(name);
//}
//int main()
//{
//
//    char *namaste = "namskar sir";
//    char name[40];
//    printf("enter your name");
//    scanf("%s", name);
//    printf("namste %s sir\n", name);
//    printf("%s", namaste);
//    return 0;
//
//}


//int main()
//{
//
//    int *p;
//    char num[10] = "sandeep";
//    p = &num[10];
//    printf("%d\n", p);
//    printf("%c\n", *num);
//    printf("%d\n", *(p+1));
//    printf("%d\n", &num[1]);
//
//}
//

//int n;
//void array(int a[]);
//
//int main()
//{
//    int i;
//    int age[n];
//    printf("take any number");
//    scanf("%d", &n);
//    printf("take any %d number\n", n);
//    for(i = 0 ; i < n ; i++)
//        {
//        scanf("%d", &age[i]);
//        }
//    array(age);
//
//}
//void array(int age[]){
//int i, sum = 0, avg;
//for(i = 0; i < 4 ; i++)
//    {
//      sum += age[i];
//    }
//avg = sum/n;
//printf("the average of the number is %d", avg);
//}
//
//
//
//
//
//
//struct home{
//    int number;
//    char name[10];
//    float expenditure;
//
//}family;
//int main()
//{
//    int number;
//    printf("take your number in family member");
//    scanf("%d", &number);
//    if(number == 5)
//        {
//  family.number = 5;
//  strcpy(family.name, "baikuntha");
//  family.expenditure = 24510.2625;
//  printf("number = %d  name = %s  expenditure = %.2f\n",family.number, family.name, family.expenditure);
//        }
//else
//  family.number = 4;
//  strcpy(family.name, "mummy");
//  family.expenditure = 2510.2625;
//  printf("number = %d  name = %s  expenditure = %.2f\n",family.number, family.name, family.expenditure);
//}



//typedef struct node{
//int data;
//struct node* link;
//}node;
//struct node* A;
//
//int main()
//{
//struct node* temp = (node*)malloc(sizeof(struct node));
//temp->data = 2;
//temp->link = NULL;
//A = temp;
//printf("%d", temp->data);
//}



// 3 typedef struct node{
// 4 int data;
// 5 struct node* link;
// 6 }node;
// 7 node* A;
// 8 int main()
// 9 {
//10 //node* temp=NULL;
//11 node* temp = (node*)malloc(sizeof(node));
//12 temp->data = 2;
//13 temp->link = NULL;
//14 A = temp;
//15 printf("%d", temp->data);
//16 }


int multiply(int,int);
int main(){
    int c;
    int (*p)(int, int);
    p = &multiply;
    c = p(2,3);
    printf("%d", c);

}
int multiply(int x,int y){
    int v;
    v = x * y;
    return v;

}
