#include<stdio.h>
void Display(char *str)
{
    if(*str !='\0')
    {
        printf("%s\n",str);
         Display(++str);
        
        printf("%s\n",str);
       
    }


   
}
int main()
{
char Arr[20];

printf("Enter the string:");
scanf("%[^'\n']s",Arr);

Display(Arr);

    return 0;
}