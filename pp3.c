#include"stdio.h"
#include"math.h"
void change(double coin_change,int *quaters,int *dimes,int *nickels,int *pennies);
void main()
{
     int c_dollars,c_quaters=0,c_dimes=0,c_nickels=0,c_pennies=0;
     double a_paid,a_due,m_change,coin_change;
     printf("Enter the amount paid:\n");
     scanf("%lf",&a_paid);
     printf("Enter the amount due:\n");
     scanf("%lf",&a_due);
     m_change=a_paid-a_due;
     c_dollars=floor(m_change);
     coin_change=(int)((m_change-floor(m_change))*100*0.5);
     printf("%f",coin_change);
     change(coin_change,&c_quaters,&c_dimes,&c_nickels,&c_pennies);
     printf("Change is dollars: %d$\n",c_dollars);
     printf("quaters:%d\n",c_quaters);
     printf("dimes:%d\n",c_dimes);
     printf("nickels:%d\n",c_nickels);
     printf("pennies:%d\n",c_pennies);
}
void change(double coin_change,int *quaters,int *dimes,int *nickels,int *pennies)
{
     int q=1,d=1,n=1,p=1;
     do
     {
      if(coin_change>=25)
      {
        *quaters=*quaters+q;
        coin_change=coin_change-25;
      }
      else if(coin_change>=10)
      {
        *dimes=*dimes+d;
        coin_change=coin_change-10;
      }
      else if(coin_change>=5)
      {
        *nickels=*nickels+n;
        coin_change=coin_change-5;
      }
      else if(coin_change>=1)
      {
        *pennies=*pennies+p;
        coin_change=coin_change-1;
      }
    } while(coin_change>=1);
}
