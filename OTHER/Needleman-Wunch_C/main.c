#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int LMAX=100;
const int NRCHMAX=5;
char S1[LMAX+5],S2[LMAX+5],DPMAT[LMAX+5][LMAX+5],SRES1[LMAX*3+5],SRES2[LMAX*3+5];
int L1,L2,scoring[3],LRES1,LRES2;
/*scoring[0]= score for matching chars
  scoring[1]= score for matching mismatch
  scoring[2]= score for matching gaps/INDELS
  */
int SMAT[NRCHMAX][NRCHMAX];//similarity matrix


void Initialize_Matrix()
{
    //0-column
    for(int i=1;i<=L1;++i)
        DPMAT[i][0]=DPMAT[i-1][0]+scoring[2];
    //0-row
    for(int j=1;j<=L2;++j)
        DPMAT[0][j]=DPMAT[0][j-1]+scoring[2];
    for(int i=1;i<=L1;++i) {
        for (int j = 1; j <= L2; ++j) {
            int v1 = DPMAT[i - 1][j] + scoring[2], v2 = DPMAT[i][j - 1] + scoring[2], v3 = DPMAT[i - 1][j - 1];
            if (S1[i - 1] == S2[j - 1])
                v3 += scoring[0];
            else
                v3 += scoring[1];
            if (v1 >= v2 && v1 >= v3)
                DPMAT[i][j] = v1;
            if (v1 <= v2 && v2 >= v3)
                DPMAT[i][j] = v2;
            if (v1 <= v3 && v3 >= v2)
                DPMAT[i][j] = v3;
           // printf("%d ", DPMAT[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<=L1;++i) {
        for (int j = 0; j <= L2; ++j)
            printf("%d ", DPMAT[i][j]);
        printf("\n");
    }
}
void BuildResult()
{
    //Without Branches
    int px=L1,py=L2;
    LRES1=LRES2=0;
    while(px!=0 || py!=0)
    {
        if(px==0)
        {
            SRES1[LRES1++]='-';
            SRES2[LRES2++]=S2[py-1];
            py--;
            continue;
        }
        if(py==0)
        {
            SRES2[LRES2++]='-';
            SRES1[LRES1++]=S1[px-1];
            px--;
            continue;
        }
        int score;
        if(S1[px-1]==S2[py-1])
            score=scoring[0];
        else
            score=scoring[1];
        if(DPMAT[px][py]==DPMAT[px-1][py-1]+score)
        {
            SRES2[LRES2++]=S2[py-1];
            SRES1[LRES1++]=S1[px-1];
            px--,py--;
            continue;
        }
        if(DPMAT[px-1][py]>DPMAT[px][py-1])
        {
            SRES2[LRES2++]='-';
            SRES1[LRES1++]=S1[px-1];
            px--;
            continue;
        }
        else
        {
            SRES1[LRES1++]='-';
            SRES2[LRES2++]=S2[py-1];
            py--;
            continue;
        }
    }
    printf("%d %d\n",LRES1,LRES2);
    for(int i=LRES1-1;i>=0;--i)
        printf("%c",SRES1[i]);
    printf("\n");
    for(int i=LRES2-1;i>=0;--i)
        printf("%c",SRES2[i]);
    printf("\n");
}
int main() {
    /*print("First String Lenght:\n");
    scanf("%d",&L1);
    printf("First String:\n");
    for(int i=0;i<L1;++i)
        scanf("%c",&S1[i]);
    print("Second String Lenght:\n");
    scanf("%d",&L2);
    printf("Second String:\n");
    for(int i=0;i<L2;++i)
        scanf("%c",&S2[i]);*/
    scanf("%s%s",S1,S2);
    L1=strlen(S1);
    L2=strlen(S2);
    printf("Read Scoring Measures:\n(Match Miss Gap)\n");
    //scanf("%d %d %d",&scoring[0],&scoring[1],&scoring[2]);
    scoring[0]=1;
    scoring[1]=-1;
    scoring[2]=-1;
    Initialize_Matrix();
    BuildResult();
    return 0;
}
