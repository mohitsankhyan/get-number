#include <stdio.h>
int main()
{
    int choice, kms, inch, cm, pound;
    printf("1 for km to miles\n2 for inches the foot \n 3 for cms to inches \n 4 for pound to kgs \n5  for inches to meters \n6 for exit\n");
lable:
    printf("enter value of choice");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("enter value of kms:");
        scanf("%d", &kms);

        printf("%d kms is equal to %.4f miles\n", kms, 0.6214 * kms);

        break;

    case 2:
        printf("enter value of enches:");
        scanf("%d",&inch);

        printf("%d inches is equal to %.4f foot \n ", inch , 0.0833*inch);

        break;

    case 3:
       printf("enter value of Cms:");
       scanf("%d", &cm);

       printf("%d Cms id equals to %.4f incheas \n ",cm ,0.395*cm);

       break;
    
    case 4:
    printf("enter Value of pound");;
    scanf("%d",&pound);

    printf("%d pound is equal to %.4f kgs \n",pound , 0.454*pound);

    break;

    case 6:
    {
        return 0;
    }
    default :
    printf("enter valid choices\n");
    }
    goto lable ;
}
