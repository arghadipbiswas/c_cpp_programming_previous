#include<stdio.h>
main()
{
       char string1[100],string2[100],string3[100];;
       int i,j,temp = 0;
       printf("Enter the string1 value: ");
       gets(string1);
       printf(" Enter the String2 value: ");
       gets(string2);
         while (string1[i] != '\0') 
	{
        string3[j] = string1[i];
        i++;
        j++;
    }
    i = 0;
    while (string2[i] != '\0') 
	{
        string3[j] = string2[i];
        i++;
        j++;
    }
    string3[j] = '\0';
        printf("\nConcatenated string3: %s", string3);
}
     
