#include <stdio.h>
#include <string.h>

void search(char * pat, char * sen)
{
    int pat_len = strlen(pat);
    int sen_len = strlen(sen);

    for(int i = 0; i <= sen_len;i++)
    {
        int j = 0;
        for( j = 0;j<pat_len;j++)
        {
            if(sen[i + j] != pat[j])
                break;
        }
        if(j == pat_len)
        {
            printf("Pattern found at Index[%d]\n",i);
        }
        
    }
}

int main()
{
    char txt[] = "this is a pattern";
    char pat[] = "a";

    search(pat,txt);
}