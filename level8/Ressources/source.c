int main(void)
{
    char input [132];

     char *_auth;
     char *_service;

     while(1) {
        printf("%p, %p \n", _auth, _service);

        if (!fgets(input, 128, 0)) {
            return 0;
        }

        if (!strncmp(input, "auth ", 5)) {
            _auth = malloc(4);
            strcpy(_auth, input);
        }

        if (!strncmp(input, "reset", 5)) {
            free(_auth);
        }

        if (!strncmp(input, "service", 6)) {
            _service = strdup(0);
        }

        if (!strncmp(input, "login", 5)) {
            if (_auth[8] == 0) {
                fwrite("Password:\n", 1, 10, 1);
            } else {
                system("/bin/sh");
            }
        }

    }
}
