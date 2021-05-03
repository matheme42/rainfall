void n(void)
{
    system("/bin/cat /home/user/level7/.pass");
    return;
}

void m(void)
{
    puts("Nope");
    return;
}

void main(int ac, char **envp)
{
    char *p1;
    void (*p2)(void);
    
    p1 = malloc(64);
    p2 = malloc(4);
    p2 = m;
    strcpy(p1, envp[1]);
    p2();
    return;
}
