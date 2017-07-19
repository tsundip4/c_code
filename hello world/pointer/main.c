#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int a = 10;
//    int *p;
//    p = &a;
//    int **q;
//    q = &p;
//printf("the value is %d\n", &p);
//    printf("the value is %d\n", p);
//    printf("the value is %d\n", *p);
//    printf("the value is %d\n", q);
//    printf("the value is %d\n", *q);
//    printf("the value is %d\n", &a);
//    printf("the value is %d\n", **q);
//
//}


//void increment(int *p);
//int main()
//{
//int a;
//a=10;
//increment(&a);
//printf("the value is %d", a);
//
//}
//
//void increment(int *p)
//{
//*p = *p +1;
//
//}

//int main()
//{
//int A[] = {1, 2, 3, 4, 5};
//
//printf("%d\n", A);
//printf("%d\n", *A);
//printf("%d\n", A+3);
//printf("%d\n", &A);
//}


//int main()
//{
//
//int A[]= {1,2,3,4,5};
//int y = sizeof(A)/sizeof(A[1+2]);
//printf("%d", y);
//
//}


int main()
{
    char c[]= "hello";
    int i;
    char *p;
     p = c;
     for( i = 0 ; i <5 ; i++)
        {
    printf("%c", *p(i+1));

        }
}
