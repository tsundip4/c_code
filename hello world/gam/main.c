#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()

//{
//    int height, base, area;
//    printf("what is height\n");
//    scanf("%d", &height);
//    printf("what is base\n");
//    scanf("%d", &base);
//    area = (height*base)/2;
//    printf("the area is: %d", area);
//}


//{
//    int i;
//    for(i = 1 ; i<=10 ; i++){
//        printf("hello world");
//    }
//    return 0;
//}
//

//{
//    int age;
//    char gender;
//    printf("what is your age\n");
//    scanf("%d", &age);
//    printf("what is your gender\n");
//    scanf(" %c", &gender);
//    if(age > 40){
//        if(gender = 'm'){
//            printf("you are getting old");
//        }
//       else
//            {
//                printf("you are younger");}
//
//    }else {
//    printf("i cant know ");}
//    return 0;
//
//}


//{
//    int i, num, factorial, temp;
//    printf("take any number\n");
//    scanf("%d", &num);
//    factorial = 1;
//
//    for(i=1 ; i<=num ; i++){
//        factorial *= i;
//
//    }  printf("%d", factorial);
//    return 0;
//
//}
//



//{
//
//    int current, amount, previous;
//    printf("what is your current unit\n");
//    scanf("%d\n", &current);
//    printf("what is your previous unit");
//    scanf("%d\n", &previous);
//    amount = (current - previous) * 8;
//    printf("your amount is:  %d ", amount);
//    return 0;
//
//
//}

//{
//    int i, j, k;
//    for(i = 1 ; i<=8 ; i++){
//            for(k=1 ; k<=8-i ; k++)
//            printf(" ");
//        for(j=1 ; j<= i ; j++)
//            printf("%d ",j);
//        printf("\n");
//    }
//    return 0;
//}




//    int i=1, j= 1;
//    while(i <= 5){
//            printf("\n");
//           while(j<=i)
//
//            {printf("%d", j);
//            j++;}
//            }
//
//
//
//
//    return 0;
//}
//
//

//{int i= 1, sum = 0, num;
//printf("take any number");
//scanf("%d", &num);
//while(i <= num){
//    sum += i;
//    i++;}
//    printf("the value is: %d\n", sum);
//    return 0;
//}


//{
//    int product=1, power, base, i=1;
//    printf("put the power");
//    scanf("%d", &power);
//    printf("put the base");
//    scanf(" %d", &base);
//    while(i <= power){
//            product*= base;
//                i++;
//
//    }
//    printf("the product is : %d", product);
//    return 0;
//}


//{
//    int product = 1, i=1, num;
//    printf("put the value of num");
//    scanf("%d", &num);
//    while(num != 0){
//        product = product *num;
//        num--;
//
//    }
//    printf("the value of foctorial is %d", product);
//    return 0;
//}

//{
//
//    int i, num, product = 1;
//    printf("take any num");
//    scanf("%d", &num);
//    for(i = num ; i>50 ; i--){
//       product = product * i;
//    }
//    printf("the value of factorial is; %d", product);
//    return 0;
//}


//{
//    int i=1;
//    while(i <= 10){
//
//
//        if(i == 5 ){
//            continue;
//        }
//        if(i == 8){
//            break;
//        }
//
//        printf("\n%d", i);
//        i++;
//
//         }
//
//    return 0;
//}

//{
//    int num;
//    char ans;
//
//    start:
//    printf("take any number\n");
//    scanf("%d", &num);
//    if(num%2 == 0){
//        printf("even number\n");
//    }
//    else{
//        printf("number is odd\n");
//
//    }
//    printf("do you want to coninue??\n");
//    scanf(" %c", &ans);
//    if(ans == 'y'){
//        goto start;
//    }
//    return 0;
//}


//{
//    char vowels;
//    printf("take any character");
//    scanf("%c", &vowels);
//    switch(vowels){
//
//case 'a':
//case 'e':
//case'i':
//case 'o':
//case 'u':
//    printf("the character is vowel");
//    break;
//default:
//    {
//
//        printf("the charcater is not vowel");
//    }
//
//    }
//    return 0;
//}

//{
//    char ch;
//    printf("take any char\n");
//    scanf("%c", &ch);
//    printf("the ascii value of %c is %d", ch, ch);
//    return 0;
//}



