//#include <stdio.h>
//
//int main()
//{
//    float bs, da, ra, gs;
//
//    printf("Enter The Basic Salary = ");
//    scanf("%f", &bs);
//
//    da = bs * 40/100;
//    ra = bs * 20/100;
//
//    gs = da + ra + bs;
//
//    printf("The Basic Salary is %f\n", bs);
//    printf("The Dearness Allowance is %f\n", da);
//    printf("Rent Allowance is %f\n", ra);
//    printf("The Gross Salary is %f\n", gs);
//
//    return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//    int km;
//    float m,inch,feet,cm;
//
//    printf("Enter the distance between two cities in KM is = ");
//    scanf("%d",&km);
//
//    m = km*1000;
//    feet = m*3;
//    inch = feet*12;
//    cm = m*100;
//
//    printf("Distance between two cities in M is %f\n",m);
//    printf("Distance between two cities in Feets is %f\n",feet);
//    printf("Distance between two cities in Inches is %f\n",inch);
//    printf("Distance between two cities in CM is %f\n",cm);
//
//    return 0;
//}






#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    float g,f;
    
    printf("Enter The Marks Of Five Subjects \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    f = a+b+c+d+e;
    g=f/5;
    
    printf("Aggregate Marks of The student is %f\n",f);
    printf("Percentage of The student is %f\n",g);
    
    return 0;
}
