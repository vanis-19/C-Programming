#include <stdio.h>
            #include <stdlib.h>

            int main()
            {
              int *iVar;
              char *cVar;
              float *fVar;

              /*allocating memory dynamically*/

              iVar=(int*)malloc(1*sizeof(int));
              cVar=(char*)malloc(1*sizeof(char));
              fVar=(float*)malloc(1*sizeof(float));

              printf("Enter integer value: ");
              scanf("%d",iVar);

              printf("Enter character value: ");
              scanf(" %c",cVar);

              printf("Enter float value: ");
              scanf("%f",fVar);

              printf("Inputted value are: %d, %c, %.2f\
              n",*iVar,*cVar,*fVar);

              /*free allocated memory*/
              free(iVar);
              free(cVar);
              free(fVar);

              return 0;
            }
