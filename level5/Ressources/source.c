void o(void)
{
    char auStack552 [520];
    
    system("/bin/sh");
    _exit(0);
    fgets(auStack552, 0x200, 1);
    printf(auStack552);
    exit(1);
    n();
    return;
}

void n(void)
{
    char *format;
    
    fgets(&format, 0x200, 1);
    printf(&format);
    exit(1);
    n();
    return;
}

void main(void)
{
    n();
    return;
}