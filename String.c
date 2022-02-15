
void largest_str(char*str, char*lstr)
{
    //hello, -> i=6,c=6
    int i=0,k=0,c=0,max=0,ind;
    for(; str[i]!=0; i++)
    {
        if(str[i]==' ')
        {
            if(c>max)
            {
                max=c;
                ind=i-c;
            }
            c=0;

        }
        else
        {
            c++;
        }
    }
    if(c>max)
    {
        max=c;
        ind=i-c;
    }
    for(int j=ind; j<ind+max;)
    {
        lstr[k++]=str[j++];

    }
    lstr[k]=0;
}

void str_scan(char*str)
{
    scanf(" %c",str);
    for(int i=1; str[i-1]!='\n'; i++)
    {
        scanf(" %c",str+i);
    }

}

int str_ToInt(char*str)
{
    int i=0,sign=1,base=10,num=0;
    if(str[i]=='-')
    {
        sign=-1;
        i++;
    }
    for(; str[i]!=0; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num=num*base;
            num=num+(str[i]-'0');
        }
    }
    return num*sign;
}

void str_rev(char*str)
{
    int i=0,len;
    len=str_len(str);
    while(i<(len/2))
    {
        swap_char(str+i,str+(len-i-1));
        i++;
    }
}

void str_ToLowerCase(char*str)
{
    int i=0;
    while(str[i])
    {
        char_ToLowerCase(str+i);
        i++;
    }
}

void str_ToUpperCase(char*str)
{
    int i=0;
    while(str[i])
    {
        char_ToUpperCase(str+i);
        i++;
    }
}

void char_ToUpperCase(char*ch)
{
    if((*ch)>='a' && (*ch)<='z')
        *ch=*ch-'a'+'A';
}

void char_ToLowerCase(char*ch)
{
    if((*ch)>='A' && (*ch)<='Z')
        *ch=*ch-'A'+'a';
}

int str_comp(char*str1,char*str2)
{
    int i=0;
    while(str1[i] || str2[i])
    {
        if(str1[i]!=str2[i])
            return 0;
        i++;
    }
    return 1;
}

int str_comp_NotCaseSensetive(char*str1,char*str2)
{
    int i=0;
    str_ToLowerCase(str1);
    str_ToLowerCase(str2);
    while(str1[i] || str2[i])
    {
        if(str1[i]!=str2[i])
            return 0;
        i++;
    }
    return 1;
}

void str_print(char*str)
{
    int i=0;
    while(str[i])
        printf("%c",str[i++]);
    printf("\n");
}
int str_len(char*str)
{
    //hello -> len=5
    int i=0;
    while(str[i])
        i++;
    return i;
}
