#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("enter ages of  ram,shyam and ajay : "); // prettier alt shift f
    scanf("%d%d%d", &ram, &shyam, &ajay);
    if (ram == shyam && shyam == ajay)
    {
        printf("ages of ram ,shyam and ajay are EQUAL");
    }
    else
    {
        if (ram < shyam)
        {
            if (ram < ajay)
            {
                printf(" RAM is YOUNGEST among them ", ram);
            }
            else
            {
                printf("AJAY is YOUNGEST among them  ", ajay);
            }
        }
        else
        {
            if (shyam < ajay)
            {
                printf("SHYAM is YOUNGEST among them  ", shyam);
            }
            else
            {
                printf("AJAY is YOUNGEST among the three numbers ", ajay);
            }
        }
    }

    return 0;
}