#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
//{
//    int n1, n2, lcm, hcf, a, b;
//    printf("take any number");
//    scanf("%d %d", &n1, &n2);
//    a=n1;
//    b=n2;
//    while(n1 != n2){
//        if(n1 > n2){
//            n1 = n1 - n2;
//        }
//        else{
//            n2 = n2 - n1;
//        }
//
//        }
//        hcf=n1;
//        lcm = (a*b)/(hcf);
//        printf("the lcm is %d\n", lcm);
//        printf("the hcf is %d\n", n1);
//
//    return 0;
//}
//{
//
//    int num, count=0;
//    printf("take any numeber");
//    scanf("%d", &num);
//    while(num !=0){
//        num = num/10;
//        count+=1;
//    }
//    printf("the number is: %d", count);
//    return 0;
//}

//{
//   int n1, n2, count= 0, i, counter = 0;
//   printf("take any two number n1 and n2");
//   scanf("%d %d", &n1, &n2);
//   printf("\nodd  even\n");
//   for(i = n1 ; i<= n2 ; i++){
//    if(i%2 == 0){
//        count+=1;
//
//
//    printf("       %d\n", i);}
//    else {
//        counter++;
//        printf("%d\n", i);
//    }
//
//
//
//
//   }
//   printf("the even number are %d\n", count);
//   printf("the odd number are %d", counter);
//
//   return 0;
//}


//{
//    int num, dividor=100, digit, temp;
//    printf("take any number\n");
//    scanf("%d", &num);
//    temp = num;
//    while(temp > 0){
//        digit = temp/dividor;
//        temp = temp%dividor;
//        dividor = dividor/10;
//        switch(digit){
//        case  1:printf("one ");break;
//        case  2:printf("two ");break;
//        case  3:printf("three ");break;
//
//        }
//    }
//    return 0;
//}


//{
//    int num, temp, count=0, rem;
//    printf("enter a number");
//    scanf("%d", &num);
//    temp=num;
//    while(temp > 0){
//
//        rem = temp%2;
//
//           temp = temp  /2;
//
//
//
//    }
//    return 0;
//}
//{
//    int i, j;
//    for(i=1 ; i<=4 ; i++){
//        for(j=1 ; j<= i ; j++){
//            printf(" * ");
//        }
//        printf("\n");
//
//    }
//    for(i = 1 ; i<=3 ; i++){
//        for(j=1 ; j<=4-i ; j++){
//            printf(" * ");
//        }
//        printf("\n");
//    }
//    for(i=1 ; i<=4 ; i++){
//        for(j=1 ; j<= i ; j++){
//            printf(" * ");
//        }
//        printf("\n");
//
//    }
//    for(i = 1 ; i<=3 ; i++){
//        for(j=1 ; j<=4-i ; j++){
//            printf(" * ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//{
//    int num, N, counter= 1, sum=0, i, j;
//    printf("how many number");
//    scanf("%d", &N);
//     printf("take the number\n");
//   for(i=1 ; i<= N ; i++){
//
//        scanf("%d\n", &num);
//
//
//        sum = sum + num;
//        counter= counter + 1;
//
//    }
//    printf("the sum of number is %d", sum);
//    return 0;
//
//}


//{
//    int num, temp, count=0;
//    printf("take any number");
//    scanf("%d", &num);
//    temp = num;
//    while(temp > 0){
//        temp = temp/10;
//
//        count = count + 1;
//    }
//    printf("the total number is %d", count);
//    return 0;
//}


//{
//
//    int i, j;
//    for(i=7 ; i > 0 ; i--){
//        for(j = 1 ; j <=i ; j++){
//            printf(" * ");}
//
//        printf("\n");
//
//    }
//    return 0;
//}
//


//{
//    int i, j, temp=0;
//    for(i=1 ; i<=5 ; i++){
//        for(j=1 ; j<=i ; j++){
//
//                temp++;
//
//               printf("%d\t",temp);
//
//        }
//        printf("\n");
//    }
//    return 0;
//}
//

//{
//    int i, j, l;
//    for(i=1 ; i<=5 ; i++){for(l=1 ; l <= 5-i ; l++){
//        printf(" ");
//    }
//        for(j=1 ; j<=i ; j++){
//            printf(" * ");
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//
//}


//{
//    int i, j, n=5, temp=15;
//
//    for(i=5 ; i>=1 ; i--){
//        for(j=1 ; j<=i ; j++){
//
//
//            printf("%d\t", temp);
//             temp--;
//        }
//        printf("\n");
//
//    }
//    return 0;
//}
//
//{
//    long int num1, num2, sum1=0,sum2, sum3, i=0, temp, rem1, rem2, rem3, j=0, k=0, total;
//    printf("take any number");
//    scanf("%d %d", &num1, &num2);
//
//    while(num1>0){
//        rem1=num1%10;
//
//        sum1 += rem1 * pow(2,i);
//        num1 = num1/10;
//        i++;}
//        while(num2>0){
//        rem2=num2%10;
//
//        sum2 += rem2 * pow(2,i);
//        num2 = num2/10;
//        j++;
//
//        }
//        total = sum1 + sum2;
//         while(total > 0){
//        rem3=total%10;
//
//        sum3 += k * rem3;
//        total = total/10;
//        k *= 10;}
//
//    printf("the number is %d", sum3);
//
//    return 0;
//}


{
    int i, j=1, l;
    for(i=25 ; i>=1 ; i--){
            i=j+(20-j);



        for(j = 1 ; j<= i ; j++){


        printf(" \x1 ");}
        printf("\n");


    }




    return 0;
}


