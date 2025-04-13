#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void get_double(double *input_number);
void read_and_clean(double *n);

void main()
{
    double a;
    get_double(&a);
    printf("The double value is: %lf",a);
}

void get_double(double *input_number)
{
    read_and_clean(input_number);
}

void read_and_clean(double *n)
{
    char strinput[100];
    char strselective[100];
    int countdot=0, dotindex, counte=0, eindex, signindex, countsign=0, flagd=0, flage=0, flagsign=0, flagn=0;
    printf("Please enter a line of input: ");
    gets(strinput);
    for(int h=0;h<strlen(strinput);h++)
    {
        if(strinput[h]=='.'&&countdot==0)
        {
            dotindex=h;
            countdot++;
            flagd=1;
        }
        if((strinput[h]=='e'||strinput[h]=='E')&&countdot==1&&counte==0)
        {
            eindex=h;
            counte++;
            flage=1;
        }
        if((strinput[h]=='+'||strinput[h]=='-')&&countdot==1&&counte==1)
        {
            signindex=h;
            countsign++;
            flagsign=1;
        }
    }
    int A=0;
    if(flagd==1)
    {
        for(int k=0;k<=dotindex;k++)
        {
            if(isdigit(strinput[k])||strinput[k]=='.')
            {
                strselective[A]=strinput[k];
                A++;
            }
        }
    }
    else
    {
        for(int y=0;y<strlen(strinput);y++)
        {
            if(isdigit(strinput[y]))
            {
                strselective[A]=strinput[y];
                A++;
            }
        }
    }
    if(flage==0)
    {
        if(flagd==1)
        {
            for(int x=dotindex+1;x<strlen(strinput);x++)
            {
                strselective[A]=strinput[x];
                A++;
            }
        }
    }
    if(flage==1)
    {
        for(int l=dotindex+1;l<eindex;l++)
        {
            if(isdigit(strinput[l]))
            {
                strselective[A]=strinput[l];
                A++;
                flagn=1;
            }
        }
    }
    if(flagn==0)
    {
        strselective[A]=0;
        A++;
    }
    if(flage==1)
    {
        strselective[A]=strinput[eindex];
        A++;
    }
    if(flagsign==1)
    {
        strselective[A]=strinput[signindex];
        A++;
    }
    if(flagsign==1)
    {
        for(int n=signindex+1;n<strlen(strinput);n++)
        {
            if(isdigit(strinput[n]))
            {
                strselective[A]=strinput[n];
                A++;
            }
        }
    }
    char *eptr;
    strselective[A]='\0';
    *n=strtod(strselective, &eptr);
}