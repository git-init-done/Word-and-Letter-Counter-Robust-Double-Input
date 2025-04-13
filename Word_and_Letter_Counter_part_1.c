#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
    int i=0, count=1;
    int lengthdynamic;
    int countfordis=0;
    char line[100];
    char linelowered[100];
    char linedistinct[100];
    char counted_chars[100];
    int counted[100];
    printf("Please enter a line of text: ");
    gets(line);
    line[strlen(line)]='\0'; //Terminating the string
    printf("The line entered is: ");
    puts(line);
    int j=0;
    for(int i=0;i<strlen(line);i++)
    {
        if((isspace(line[i])||line[i]=='.'||line[i]==',')&&i!=strlen(line)-1)
        {
            count++;
        }
        if(isalpha(line[i]))
        {
            linelowered[j]=tolower(line[i]);
            j++;
        }
    }
    linelowered[strlen(line)]='\0';//Terminating the string
    for(int a=0; a<strlen(linelowered);a++)
    {
        for(int b=0;b<strlen(linelowered);b++)
        {
            if(linelowered[b]>linelowered[a])
            {
                char exchange=linelowered[b];
                linelowered[b]=linelowered[a];
                linelowered[a]=exchange;
            }
        }
    }
    int flag=0;
    linedistinct[0]=linelowered[0];
    for(int c=0;c<strlen(linelowered);c++)
    {
        for(int d=0;d<strlen(linelowered);d++)
        {
            if(linelowered[c]==linedistinct[d])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            lengthdynamic=strlen(linedistinct);
            linedistinct[lengthdynamic]=linelowered[c];
        }
        flag=0;
    }
    linedistinct[strlen(linedistinct)]='\0';//Terminating the string
    for(int e=0;e<strlen(linedistinct);e++)
    {
        for(int f=0;f<strlen(linelowered);f++)
        {
            if(linedistinct[e]==linelowered[f])
            {
                countfordis++;
            }
        }
        counted[e]=countfordis;
        countfordis=0;
    }
    printf("%d words ", count);
    for(int g=0;g<strlen(linedistinct);g++)
    {
        if(isalpha(linedistinct[g]))//Countermeasure to avoid whitespace and non-alphabetic characters
        {
            if(counted[g]==0)
            {
                continue;
            }
            else
            {
                printf("%d %c ", counted[g], linedistinct[g]);
            }
        }
    }
}