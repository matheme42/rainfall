int _language = 0;

void greetuser(void *arg_8h)
{
    char *s1;
    
    if (_language == 1) {
        s1 = "Hyvää päivää ";
    } else {
        if (_language == 2) {
            s1 = "Goedemiddag! ";
        } else {
            if (_language == 0) {
                s1 = "Hello ";
            }
        }
    }
    strcat(&s1, &arg_8h);
    puts(&s1);
    return;
}


int main(char **argv, char **envp)
{
    char    *lang;
    char    buffer [40];

    if (argv == 3) {
        strncpy(buffer, envp[1], 0x28);
        strncpy(buffer, envp[2], 0x20);

        lang = (char *)getenv("LANG");
        if (lang && strcmp(lang , "fi"))
            _language = 1;
        else if (lang && strcmp(lang , "nl"))
            _language = 2;
        greetuser(&buffer);
        return (0);
    }
    return (1);
}
