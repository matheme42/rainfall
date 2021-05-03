int main(int ac, char **envp)
{
    char    buffer [40];
    int     number;
    
    number = atoi(envp[1]);
    if (number < 10) {
        memcpy(buffer, envp[2], number * 4);
        if (number == 0x574f4c46) {
            execl("/bin/sh", 0x8048580, 0);
        }
        return (0);
    }
    return (1);
}