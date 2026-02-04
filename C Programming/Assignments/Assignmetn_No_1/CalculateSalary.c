/*Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively. */

#include <stdio.h>
void main()
{
    int basic = 8000;
    int DA, TA, HRA, Total_Salary;

    if (basic <= 5000)
    {
        DA = 0.10 * basic;
        TA = 0.20 * basic;
        HRA = 0.25 * basic;
    }
    else
    {
        DA = 0.10 * basic;
        TA = 0.20 * basic;
        HRA = 0.25 * basic;
    }

    Total_Salary = DA + TA + HRA + basic;

    printf("the DA is %d \n",DA);
    printf("the TA is %d \n",TA);
    printf("the HRA is %d \n",HRA);
    printf("the Total_Salary is %d \n",Total_Salary);
}