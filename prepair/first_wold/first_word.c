#include <unistd.h>
int main(int   argc,char **argv)
{
    int j;
    int i;

    i = 1;
    j = 0;
    if(argc == 2)
    {
        while(argv[1][j] != '\0')
    {
        if (argv[1][j] == '\0')
        {
            write (1,"\n",1);
        }
        else if (!(argv[1][j] == ' '))
        {
            write (1,&argv[1][j],1);
            j++;
        }
        else if (argv[1][j] != '\0')
        {
            write(1,&argv[1][j],1);
            j++;
        }
    }
    }
    write(1, "\n",1);
}