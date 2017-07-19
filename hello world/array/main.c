#include <stdio.h>
#include <stdlib.h>

int main(){
int sum[3]={1}, i;
for(i = 0 ; i < 3 ; i++){

    printf("the address of %d is %d\n", sum[i], &sum[i]);
}
return 0;
}


int main(){
int average[n], i, n, total=0, avg;
printf("take n numbers");
scanf("%d", &n);
printf("take any %d number", &n);
for(i = 0 ; i < n ; i++){
    scanf("%d", &average[i]);
    total = total + average[i];
    }
    avg = total/n;
    printf("average is %d", avg);
}


int main(){
int a[10][10], i, j, m, n, sum=0 , highest = 0, row;
printf("take any two dimension matrics");
scanf("%d %d", &m, &n);
printf("now insert matrices\n");
for(i=0;i<m;i++){
        for(j=0; j<n ;j++)
    scanf("%d", &a[i][j]);
}
for(i=0 ;i<m ;i++){
        sum = 0;

        for(j=0; j<n ;j++){


            printf("\t%d", a[i][j]);
          sum += a[i][j];

           }


        printf("\t\t%d", sum);
        printf("\n");

        if(highest < sum){
            highest = sum;
            row = i;

        }


       } printf("the highest is %d in %d row", sum, i);



        return 0;




        }


fold of matrices
int main(){
int a[3][3], i, j;
printf("take the number for matrix\n");
for(i = 0 ; i < 3 ; i++){
    for(j = 0 ; j < 3 ; j++){
     scanf("%d", &a[i][j]);
    }
    }
for(i = 0 ; i < 3 ; i++){
    for(j = 0 ; j < 3 ; j++){
        printf("\t%d", a[i][j]);

    }
    printf("\n");
    }






return 0;
}

int main(){
int a[4] = {1,2,3,4}, b[5] = {5,6,7,8,9}, c[9], i, j, k =0;

for(i = 0; i < 4 ; i++
{

  c[i] = a[i];
}
for(j = 4 ; j < 9 ; j++)
    {

        c[j] = b[k];
    k++;
    }



for(i = 0; i < 9 ; i++)
{
    printf("%d\n", c[i]);
}

return 0;


}


int main(){
char name[10];
strcpy(name, "sandeep");
printf("ur name is %s", name);
return 0;
}



int main(){
char name[5][10];
int age[5], i;
int weight[5];
printf("enter your datails\n");
for(i = 0 ; i< 5; i++){
    scanf("%s %d %d", name[i], &age[i], &weight[i]);

    }for(i = 0 ; i < 5; i++){
printf("your name is %s and wight is %d age is %d\n", name[i], age[i], weight[i]);}
return 0;

}



int main(){int p;
char name[10] = "sandeep";
p =strlen(name);
printf("your nam has %d length", p);
return 0;
}


int main(){
char name[10];
int i, y, count = 0;
printf("wrie any word in capital");
scanf("%s", name);
y =strlen(name);
for(i = 0 ; i < 10 ; i++){
    if(name[i] == 'B'){
        count+=1;
    }
}
printf("the total number of B is %d", count);
return 0;


}


int main(){
char str1[10],str2[10]="k cha";
printf("take name for both string");
scanf("%s %s", str1, str2);
strcpy(str1, str2);
printf("after copy string becomes\n");
printf("%s", str1);
return 0;

}


int main(){
char name[]="shiva ",nam[]="bhusal";
strrev(name);
printf("your name is %s", name);
return 0;
}

int main(){
char pass[10];
printf("enter your password\n");
scanf("%s", pass);
if(strcmp(pass, "admin123")==0)
    printf("congratulaion sandeep");
else
    printf("your password is wrong");
return 0;
}

int main(){
char name[10], name1[5], name2[5];
int i, j=0, k=0,lnth;
printf("enter your name\n");
scanf("%s", name);
lnth = strlen(name);
for(i = 0 ; i < lnth/2 ; i++){
    name1[i] = name[i];
}
name1[i]='\0';
for(i = lnth/2 ; i <= lnth ; i++){
    name2[k] = name[i];
    k++;
}
name1[k]='\0';
printf("%s\t%s", name1, name2);
}


int main(){
char name[10], original[10];
int i;
printf("enter your name\n");
scanf("%s", name);
strcpy(original, name);
strrev(name);
if(strcmp(name, original)==0){
    printf("the name is palindrome");
}
else
    printf("the number is not palindrome");
return 0;


}


int main(){int len, i;
    char name[10];

printf("enter your name");
scanf("%s", name);
len = strlen(name);
printf("the ascii value is\n");
for(i = 0 ; i < len ; i++)
{
   printf("%d\n", name[i]);
}

return 0;
}





int main()
{
    int a[2][2]={2,3,4,5};
    int *p[2];
    *p = a;
    printf("%d\n", a);
    printf("%d\n", a+1);
    printf("%d\n", a[1]);
    printf("%d\n", *(a+1));
    printf("%d\n", *p);


    printf("%d\n", **(a+1));
    printf("%d\n", *a);
    printf("%d\n", *(*p));


}


int main(){
int a, i, sum = 0;
for(i = 0 ; i < 5 ; i++)
    {
     printf("%d\n", i);
    }


return 0;



}
