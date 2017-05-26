//
// Created by user on 4/5/2017.
//

#include <stdio.h>
#define KST 25
int main(void)
{
    struct student {
        char name[35];
        char grup[10];
        long number;
        double rating;
    } starr[KST], stud, *pst, *pst1, *pst2;
    int k, kst;
    double inrating;
    printf("number of students - ");
    scanf("%d", &kst); getchar();
    puts("\tData: ");
    for(k = 0; k < kst; k++) {
        printf("\n%2d. Name and surname: ", k + 1);
        gets(starr[k].name);
        printf("group: ");
        gets((starr + k) -> grup);
        printf("student ID number: ");
        scanf("%ld", &starr[k].number);
        printf("score: ");
        3
        scanf("%lf", &inrating); getchar();
        (starr + k) -> rating = inrating;
    }
    for(k = 0; k < kst; k++) {
        pst1 = starr;
        pst2 = starr + 1;
        for( ; pst2 < starr + kst - k; pst1++, pst2++)
            if (pst1 -> rating < pst2 -> rating) {
                stud = *pst1;
                *pst1 = *pst2;
                *pst2 = stud;
            }
    }
    printf("\n\t students list: ");
    for (k = 0, pst = starr; k < kst; k++, pst++)
        printf("%2d. %-30.27s%-8s%8ld%8.2lf\n", k + 1, pst -> name,
               pst -> grup, pst -> number, pst -> rating);
    return 0;
}