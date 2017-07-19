#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    char string[10];
//    printf("what is your name");
//    scanf("%[^m]", string );
//    printf("you said you name is %s", string);
//    return 0;
//}


//{
//    char string[100];
//    printf("enter your name");
//    scanf("%[a-z]", string);
//    printf("your name is %s", string);
//    return 0;
//
//}

//{
//    float x = 3.0, y = 12.5, z = 523.3;
//    float A = 300.0, B = 1200.5, C = 5300.3;
//    printf("x y z = %d|\t%d\t%d\n", x, y, z);
//    printf("A B C = %d\t%d\t%d\n", A, B, C);
//    printf("...............................\n");
//    printf("x y z = %d\t%d\t%d\n", x, y, z);
//    printf("A B C = %d\t%d\t%d\n", A, B, C);
//    return 0;
//
//
//}


//{
//    char str[] = "hello nepal";
//    printf("\n values are: %d\t%x\t%o\n", 500, 400, 300);
//    printf("%c\n%3c\n%4c\n", 'A', 'A', 'A');
//    printf("%-15s\n%15s\n%.5s",str, str, str);
//    return 0;
//
//}



//{
//    char san[] = "my name is sandeep";
//    printf("%s\n%.6s\n", san, san);
//
//    printf("the value of hexadecimal of 96 is: %x", 43);
//    return 0;
//
//}


//{
//    char gender;
//    printf("what is your gender");
//    gender = getchar();
//    printf("your gender is : ");
//    putchar(gender);
//    return 0;
//}


//{
//    char string[100];
//    printf("what is your name");
//    gets(string);
//    printf("your name is :");
//    puts(string);
//    return 0;
//
//}


//{
//    char n, m;
//    printf("enter any two number\n");
//    n = getche();
//    printf("\nanother number is \n");
//    m = getch();
//    printf("\nthe frst number is: ");
//    putch(n);
//    printf("\nthe second number is: ");
//    putch(m);
//    return 0;
//
//}


//{
//    printf("Hello!\t\tHow are you?\n");
//    printf("what\tis\n");
//    printf("your name?");
//}


//{
//    char and;
//    printf("enter your character");
//    scanf("%c",&and);
//    printf("the ascii value of: %d",and);
//    return 0;
//
//}



//{
//    int a;
//    printf("take any number\n");
//    scanf("%d", &a);
//    printf("the value is %0d",a);
//    return 0;
//}

//int main(){
//    int i;
//    int a[4]= {1,2,3,4,5};
//    for(i = 0, i < 4, i++){
//        printf("%d", a[i]);
//    }
//    return 0;
//
//
//}


//int main()
//{
//    int a[7] = {1,2,3,4,5,6}, x, i,val;
//    printf("position");
//    scanf("%d", &x);
//    for(i = 6 ; i >= x ; i--)
//        {
//        a[i]=a[i-1];
//        }
//
//    printf("Value::");
//    scanf("%d",&val);
//    a[x]=val;
//    for(i = 0 ; i < 7 ; i++)
//        {
//        printf("%d", a[i]);
//        }
//}

//int main()
//{
//    int i, x, n, pos, val;
//    int a[6];
//    printf("take the value you want\n");
//    scanf("%d", &n);
//    for(i = 0 ; i < n ; i++)
//        {
//            scanf("%d", &a[i]);
//        }
//    for(i = 0 ; i < n ; i++)
//        {
//            printf("%d\t", a[i]);
//        }
//    printf("the position and value");
//    scanf("%d", &pos, &val);
//    for(i = pos ; i < n ; i++)
//        {
//            a[i] = a[i-1];
//        }
//    a[pos] = 9;
//    printf("after addition");
//    for(i = 0 ; i < n-1 ; i++)
//        {
//            printf("%d\t", a[i]);
//        }
//
//
//}


int main()
{
    int a[6], *p;
    p = a;
    printf("%d\n", &a[0]);
    printf("%d", p);

}
