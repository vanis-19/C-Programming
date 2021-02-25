#include <stdio.h>

            enum course {C,JAVA,VB,HTML,JS};

            int main()
            {
                enum course cou;
                cou = JS;
                printf("course is %d",cou+1);
                return 0;
            }