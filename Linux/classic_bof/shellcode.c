unsigned char shellcode[] =

"\x31\xc0\xb0\x04\x31\xdb\x53\x68\x72\x6c\x64\x0a"
"\x68\x6f\x20\x77\x6f\x68\x68\x65\x6c\x6c\x89\xe1"
"\x31\xd2\xb3\x01\xb2\x0c\xcd\x80\xb0\x01\xcd\x80";

int main(void)
{
        int (*f)() =  (int(*)())shellcode;
        f();
}
