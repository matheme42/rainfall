int main(char **argv, char **envp)
{
    int32_t len;
    char other [16];
    char pass [66];
    int32_t fd;
    
    uVar4 = 0;
    fd = fopen("/home/user/end/.pass", 0x80486f0);


    if ((fd == 0) || (argv != (char **)0x2)) {
        return (-1);
    
    fread(other, 1, 66, fd);
    len = atoi(envp[1]);
    *(char *)((int32_t)other + len) = 0;
    fread(pass, 1, 65, fd);
    fclose(fd);
    if (strcmp(other, envp[1])) {
        execl("/bin/sh", 0x8048707, 0);
    } else {
        puts(pass);
    }
    return (0);
}