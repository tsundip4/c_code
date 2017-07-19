#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//int sum(int, int);
//int main(){
//int a, b, p;
//printf("take any two number");
//scanf("%d %d", &a, &b);
//p= sum(a,b);
//printf("the value is %d", p);
//
//}
//int sum(int x, int y){
//    int sum;
//
//    sum = x+y;
//    return sum;
//}

//}





//int sum(int);
//int main(){
//
//int a, y;
//printf("take any number");
//scanf("%d", &a);
//y = sum(a);
//printf("the sum is %d", y);
//
//}
//int sum(int x)
//{
//   int rem, add;
//   if(x<=0)
//    return 0;
//
//   else{
//    rem = x%10;
//    x = x/10;
//
//
//     add = rem + sum(x);
//
//
//  return add;
//  }

//}




//int sum(void);
//int main(){
//    int y;
//    y= sum();
//    printf("the sum is %d", y);
//
//
//
//}
//int sum(void){
//int a, b, c;
//printf("take any two number ");
//scanf("%d %d", &a, &b);
//c= a+b;
//return c;
//
//
//}






//}

//int fib(int);
//int main(){
//int n, y;
//printf("take any term");
//scanf("%d", &n);
//y = fib(n);
//printf("the value is %d", y);
//
//
//}
//int fib(int x){
//    int p;
//
//if(x==1)
//    return 0;
//if(x==2)
//    return 1;
//p = fib(x-2) + fib(x-1);
//return p;

//}
//
//void block(void);
//void block2(void);
//int main(){
//printf("\n\n");
//block();
//printf("\xBA WELCOME TO FUNCTION \xBA\n");
//block2();
//return 0;
//
//
//}
//void block(void){
//
//int i;
//printf("%c",201);
//for(i = 0 ;i < 21 ; i++)
//    printf("%c",205);
//printf("%c",187);
//printf("\n");
//}
//
//void block2(void){
//
//int i;
//printf("%c",200);
//for(i = 0 ;i < 21 ; i++)
//    printf("%c",205);
//printf("%c",188);
//printf("\n");
//}

//int sum(int);
//int main(){
//int num, y;
//printf("take any number");
//scanf("%d", &num);
//y = sum(num);
//printf("the sum is %d", y);
//
//
//}
//int sum(int x){
//    int p;
//if (x==1)
//    return 1;
//else
//    p = x + sum(x-1);
//return p;
//
//}

//float pow(int, int);
//int main (){
//int base, power, l;
//printf("take any number");
//scanf("%d %d", &base, &power);
//l = pow(base, power);
//printf("%d", l);
//
//
//}
//float pow(int x, int y){
//    int  p;
//if(y==0)
//    return 1;
//else
//        p = x * pow(x, y-1);
//    return p;
//
//}


//int sum(int);
//int main(){
// int num, y;
// printf("take any number");
// scanf("%d", &num);
// y = sum(num);
// printf("the sum is %d", y);
//
//}
//int sum(int x){
//int rem , p;
//if(x==0)
//    return 0;
//else
//    rem = x % 10;
//    x = x/10;
//    p = rem + sum(x);
//    if(p>9){
//        int a, w;
//        a = p % 10;
//        p = p/10;
//        w = a + sum(p);//function call itself so that p check its value and again if p greater than 9 if condition is tested and executed
//        return w;
//}
//return p;


//}


//
//int prime(int,int);
//int main(){
//int num, temp, y;
//printf("take any value");
//scanf("%d", &num);
//
//y = prime(num, num/2);
//if(y==1)
//    printf("the number is prime");
//    else
//        printf("the number is not prime");
//
//}
//int prime(int x,int y){
//int i;
//
//for(i = 2 ; i <= y ; i++){
//    if(x % i ==0)
//        return 0;
//    else if(x % i != 0)
//    return 1;
//}



//}


//int binary(int);
//int main(){
//int a, y;
//printf("take any decimal value");
//scanf("%d", &a);
//y = binary(a);
//printf("the value is %d", y);
//}
//int binary(num){
//int rem, sum = 0, factor=1;
//if(num!=0){
//rem = num%2;
//sum = sum  + rem *factor;
//factor*=10;
//binary(num/2);
//}
//
//
//return sum;
//
//
//}


//#define pi 3.14
//#define p pi * r *r
//int main(){
//float area;
//int r;
//printf("take any value");
//scanf("%d", &r);
//area = p;
//printf("the area is %f", area);
//
//}


//void transfer(int n, char )


//int main(){
//int mean[50],average, deviation, sum=0,p=0, j, i, variance, n, x;
//printf("take any n number");
//scanf("%d", &n);
//for(i=0 ; i< n ; i++){
//
//    scanf("%d", &mean[i]);
//    sum = sum + mean[i];
//}
//average = sum / n;
//
//for(j = 0 ; j < n ; j++){
//
//    x = mean[j]-average;
//    p = p + x * x;
//
//}
//
//variance = p / n;
//deviation = sqrt(variance);
//printf("%d\n", average);
//printf("%d\n", variance);
//printf("%d\n", deviation);
//return 0;
//
//
//}
//int func(int,int);
//int main(){
//int sum[4] = {5,4,3,2}, i, p;
//for(i = 0 ; i < 4 ; i++){
//    p = func(sum[i], sum[i+1]);
//
//}
//printf("%d", p);
//}
//int func(int x, int y){
//if(x > y)
//    return x;
//else
//    return y;
//
//
//}

//int main(){
//int sum[50], i, j, n,temp;
//printf("take any n number");
//scanf("%d", &n);
//for(i = 0 ; i < n ; i++){
//    scanf("%d\n", &sum[i]);
//}
//for(i = 0 ; i < n-1 ; i++){
//    for(j=i+1 ; j < n ;j++){
//
//        if(sum[i] > sum[j]){
//            temp = sum[i];
//            sum[i] = sum[j];
//            sum[j] = temp;
//
//        }
//
//    }
//if(i == 2)
//    continue;
//
//}
//
//    printf("%d\t", sum[i]);
//
//return 0;
//
//
//}
//
//


//int main(){
//int arr[50], i, j, n;
//printf("tak the number you want to print\n");
//scanf("%d", &n);
//printf("the elemrnts you want to print\n");
//for(i = 0 ; i < n ; i++){
//    scanf("%d", &arr[i]);
//    }
//printf("the number you want to delete");
//scanf("%d", &j);
//for(i = 0 ; i < n ; i++){
//    if(i > j){
//        arr[i]= arr[i+1];
//    }
//
//}
//n--;
//printf("the number after deleting certain elements\n");
//for(i = 0 ; i < n ; i++){
//    printf("%d\t", arr[i]);
//}
//return 0;
//
//}


//int main(){
//int num[20], temp[20], i, j, n, numb, pos;
//printf("take the number you want to enter");
//scanf("%d", &n);
//printf("number you want to take\n");
//for(i = 0; i < n ; i++)
//    {
//    scanf("%d", &num[i]);}
//printf("the number and position you want to enter");
//scanf("%d %d", &numb, &pos);
//for(i = 0; i < n ; i++)
//    {
//        if(i == pos){
//            temp[i]=numb;
//            temp[i+1] = num[i];
//        }
//
//    }
//    for(i = 0; i < n+1 ; i++)
//     num[i] = temp[i+1];
//    for(i = 0; i < n ; i++){
//        printf("%d\n", num[i]);
//    }
//    return 0;
//
//
//}

//int main(){
//int arr[2][3], i, j;
//printf("take the matrices\n");
//for(i = 0 ; i < 2 ; i++){
//    for(j = 0 ; j < 3 ; j++)
//    scanf("%d", &arr[i][j]);
//}
//for(i = 0 ; i < 2 ; i++){
//    for(j = 0 ; j < 3 ; j++)
//    printf("\t%d",arr[i][j]);
//    printf("\n");}
//
//    return 0;
//
//
//
//}


//int main(){
//int *p;
//int a , b ,c;
//p = c;
//printf("take any numeber");
//scanf("%d %d", &a, &b);
//c = a + b;
//p = &c;
//printf("%d", *p);
//
//}


void printhello(char *name)
{

    printf("hello");

}
int main()
{

    void (*p)(char*);
    p = printhello;
    p("tom");
}
