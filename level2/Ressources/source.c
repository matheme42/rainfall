void p(void)
{
    int unaff_retaddr;
    char *src;
    int var_ch;
    
    fflush(1);
    gets(&src);
    if ((unaff_retaddr & 0xb0000000) == 0xb0000000) {
        printf("(%p)\n", unaff_retaddr);
        _exit(1);
    }
    puts(&src);
    strdup(&src);
    return;
}


void main(void)
{
    p();
    return;
}
