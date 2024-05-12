#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <fstream>

using namespace std;

using namespace std;
double random1 () //The function, which generates a random number.
{
    double R =(double)rand()/((double)RAND_MAX+1.0) ;
    return R;
}
int main()
{
    fstream p;
    srand( time(NULL) );
    int Nmax = 5000; //Maximal number of steps.
    int s=1; //The initial state.
    int c = 1; //This variable is count.
    double u; //This is the random number.
    double alfa = 0.5;
    double beta = 1;
    long double p1,p2; //The probability distribution of states 1 and 2.
    p1 =0;
    p2=0;
    p.open("states.txt",ios::out);
    for(int i =2; i<=Nmax+1; i=i+1)
    {
        u = random1(); //I generate random number.
        if(s == 1)
        {
            if (u<alfa)
                //If the state is equal to one and the random number is smaller than alfa, then the program changes the state to 2.
            {
                s=2;
            }
        }
        else
        {
            if(u<beta)
                //If the state is equal to two and the random number is smaller than the beta, the program changes the state to 1.
            {
                s =1;
            }
        }
        if(s == 1)
            //If the state equals one, then we add one to count.
        {
            c = c +1;
        }
        //p1 = (double)c/(double)i;
        //I calculate the probability distribution of states 1 and 2.
        //p2 = ((double)i-(double)c)/(double)i;
       // p << i << " " << p1 << " " << p2 <<endl;
        p << i << " " << s <<endl;
        //I save my results to the file.
    }
     p.close();
    return 0;
}
