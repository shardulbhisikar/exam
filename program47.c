#include <stdio.h>
    int main() 
    {
            int s1, s2, sumf;

            printf("Enter two integers: ");
            scanf("%d %d", &s1, &s2);

            // calculating sum
            sumf = s1 + s2;

            printf("%d + %d = %d", s1, s2, sumf);
            return 0;
    }
