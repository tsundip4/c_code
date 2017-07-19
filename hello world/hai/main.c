#include <stdio.h>
#include <stdlib.h>

//int main()
//
//    #define  LOWER 0
//    #define  UPPER 300
//    #define  STEP 20
//
//{
//
//        int fahr, celsius;
//    for(fahr = LOWER ; fahr <= UPPER ; fahr = fahr + STEP){celsius = (5*(fahr-32)/9);
//    printf("%d %d\n", fahr, celsius);
//    }
//    return(0);


 int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF){
            printf("\na char has been detected");
        ++nc;
    }

    printf("%ld\n", nc);
    return(0);
}
