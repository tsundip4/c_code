#include <stdio.h>
int main()
{int lower, upper, step;
 float farh, celsius;
 lower = 200;
 upper = 0;
 step = -20;

for (farh = upper; farh <= lower; farh = farh + step)
    printf("%4.0f %3.1f\n", farh, celsius = (5.0/9.0)*(farh-32));
return(0);
}
