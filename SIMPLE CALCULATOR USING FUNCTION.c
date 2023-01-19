#include<stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
int mod(int,int);
main()
{
    float a,b;
    char ch;
    float res;
    printf("Enter operator and values of a,b\n");
    scanf("%c%f%f",&ch,&a,&b);
    switch(ch)
    {
        case '+':res=add(a,b);
                 break;
        case '-':res=sub(a,b);
                 break;
        case '*':res=mul(a,b);
                 break;
        case '/':if(b==0)
                  {
                      printf("ERROR \n");
                      exit(0);
                  }
                  else
                    res=div(a,b);
                  break;
       case '%':res=mod((int)a,(int)b);
                  break;
    }
    printf("RESULT=%f \n",res);
}

float add(float a,float b)
{
    float res;
    res=a+b;
    return res;
}

float sub(float a,float b)
{
    float res;
    res=a-b;
    return res;
}

float mul(float a,float b)
{
    float res;
    res=a*b;
    return res;
}

float div(float a,float b)
{
    float res;
    res=a/b;
    return res;
}

int mod(int a,int b)
{
    int res;
    res=a%b;
    return res;
}

