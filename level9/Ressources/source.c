
void N(int arg_8h, int arg_ch)
{
    // N::N(int)
    *(code **)arg_8h = vtable.N.0;
    *(int *)(arg_8h + 0x68) = arg_ch;
    return;
}

int operator(int arg_8h, int arg_ch)
{
    // N::operator-(N&)
    return *(int *)(arg_8h + 0x68) - *(int *)(arg_ch + 0x68);
}

void setAnnotation(void *s1, char *s)
{
    char uVar1;
    
    // N::setAnnotation(char*)
    uVar1 = strlen(s);
    memcpy((int)s1 + 4, s, uVar1);
    return;
}

void main(char **argv, char **envp)
{
    void *s1;
    code **arg_8h;
    int var_bp_4h;
    
    if ((int)argv < 2) {
        _exit(1);
    }
    s1 = (void *)operator new(unsigned int)(0x6c);
    N(int)((int)s1, 5);
    arg_8h = (code **)operator new(unsigned int)(0x6c);
    N(int)((int)arg_8h, 6);
    setAnnotation(char*)(s1, envp[1]);
    (**(code **)*arg_8h)(arg_8h, s1);
    return;
}