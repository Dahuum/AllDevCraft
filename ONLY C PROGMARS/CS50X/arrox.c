#include <stdio.h>
#include <cs50.h>
const int N;

float average (int array[]);


int main(void)
{

    int scores[N];
    for(int i = 0 ; i < N ; i++)
    {
        scores[i] = get_int("Your Score: ");
    }



    printf ("Average: %f\n",average(scores));
}



float average (int array[])
{
    int sum = 0;
    for(int i = 0 ; i<N; i++)
    {
        sum += array[i];
    }
    return sum / (float) 3;
}
