int main(int ac, char **envp)
{
    int     nb;
    char    *str;
    
    nb = atoi(envp[1]);

    if (nb == 423) {
        execv("/bin/sh");
    } else {
        write(1, "No !\n", 5);
    }
    return 0;
}