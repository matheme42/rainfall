int _m = 0;

void n(void)
{
    char *s;
    
    fgets(&s, 0x200, 0);
    p((char *)&s);
    if (_m == 0x1025544) {
        system("/bin/cat /home/user/level5/.pass");
    }
    return;
}

void p(char *format)
{
    printf(format);
    return;
}

void main(void)
{
    n();
    return;
}