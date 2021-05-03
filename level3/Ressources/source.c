int _m = 0;

void v(void)
{
    char *format;
    
    fgets(&format, 0x200, 0);
    printf(&format);
    if (_m == 0x40) {
        fwrite("Wait what?!\n", 1, 0xc, 1);
        system("/bin/sh");
    }
    return;
}

void main(void)
{
    v();
    return;
}