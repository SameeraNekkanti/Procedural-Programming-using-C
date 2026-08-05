#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char largest[100];
    char smallest[100];
    char word[100];
    int i=0;
    int j=0;
    int max=0;
    int min=100;

    printf("input the string: ");
    fgets(str, sizeof(str),stdin);
while(1)
{
    if(str[i]==' ' || str[i]=='\n' || str[i]=='\0')
    {
        word[j]='\0';

        if(j>0)
        {
            if(j>max)
            {
                max=j;
                strcpy(largest,word);
            }

            if(j<min)
            {
                min=j;
                strcpy(smallest,word);
            }
        }

        j=0;

        if(str[i]=='\0')
            break;
    }
    else
    {
        word[j]=str[i];
        j++;
    }

    i++;
}

printf("largest word is %s\n", largest);
printf("smallest word is %s\n", smallest);

return 0;
}
