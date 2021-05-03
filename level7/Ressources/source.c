char c[44];

void m(void)
{
    int t;
    
    t = time(0);
    printf("%s - %d\n", c, t);
    return;
}

int main(int ac, char **envp)
{
    char *p1;
    char p3;
    char *p2;
    
    p1 = (char *)malloc(8);
    *p1 = 1;
    p3 = malloc(8);
    p1[1] = p3;
    p2 = (char *)malloc(8);
    *p2 = 2;
    p3 = malloc(8);
    p2[1] = p3;
    strcpy(p1[1], envp[1]);
    strcpy(p2[1], envp[2]);
    p3 = fopen("/home/user/level8/.pass", 0x80486e9);
    fgets(c, 0x44, p3);
    puts(0x8048703);
    return 0;
}