#include<stdio.h>
#include<math.h>

int equation_2()
{
     int x,
        x1,
        x2,
        a,
        b,
        c,
        d;

    printf("Please Enter A B ET C\n");
    scanf("%d%d%d", &a , &b , &c);

    if(a != 0 && b != 0 && c != 0)
    {
        d = (b * b)  - 4 * a * c ;
        printf("delta = %d \n ", d);
        if(d > 0)
        {
            printf("I l ya deux solution X1 et X2");

            x1 = (- b - sqrt(d)) / 2 * a;
            x2 = (- b + sqrt(d)) / 2 * a;

            printf("X1 = %d\n X2 = %d", x1 , x2 );

        }
        else if( d == 0 )
        {   
            printf("Il ya une solution x1\n");
            x1 = -b / 2 * a;
            printf("x1 = %d\n", x1);
        }
        else if( d < 0)
        {
            printf("pas de solution\n");
        }
    }
    else if( a == 0 && b != 0 && c != 0)
    {
        printf("le solution x = - c / b :\n");
        x = - c / b;
        printf("x = %d", x);
    }
    else if( a == 0 && b == 0 && c != 0)
    {
        printf("pas de solution");
    }
    else if( a == 0 && b == 0 && c == 0)
    {
        printf("Tout les reel dans le ensomble");
    }
}

int main()
{
    equation_2();
    return 0;
}

