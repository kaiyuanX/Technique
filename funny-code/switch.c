int function(void)
{
    static int i, state = 0;
    switch (state)
    {
    case 0: /* start of function */
        for (i = 0; i < 10; i++)
        {
            state = 1; /* so we will come back to "case 1" */
            return i;
        case 1:; /* resume control straight after the return */
        }
    }
}

void send(int *to, int *from, int count)
{
    int n = (count + 7) / 8; // n*8>=count
    switch (count % 8)
    {
    case 0:
        do
        {
            *to++ = *from++;
        case 7:
            *to++ = *from++;
        case 6:
            *to++ = *from++;
        case 5:
            *to++ = *from++;
        case 4:
            *to++ = *from++;
        case 3:
            *to++ = *from++;
        case 2:
            *to++ = *from++;
        case 1:
            *to++ = *from++;
        } while (--n > 0);
    }
}
