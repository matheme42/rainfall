void p(char *dest, char *s)
{
    char *str;
    char *buff;
    
    puts(s);
    read(0, &buff, 0x1000);
    str = (char *)strchr(&buff, 10);
    *str = 0;
    strncpy(dest, &buff, 20);
    return;
}

void pp(char *dest)
{
    int buff1;
    int buff2;
    
    p((char *)&buff1, '-');
    p((char *)&buff2, '-');
    strcpy(dest, &buff1);

    *(char *)(dest + (strlen(dest) - 1)) = *(char *)0x80486a4;
    strcat(dest, &buff2);
    return;
}

int main(void)
{
    char buffer [54];
    
    pp(buffer);
    puts(buffer);
    return 0;
}