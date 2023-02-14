using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Program
{
    class program
    {
        static void Main(string[] args)
        {
            bool done = false;
            int counter = 0;
            //keep track of number of primes already displayed
            int increment = 2;
            while (!done)
            {

                int factorCount = 0;
                for (int i = 1; i <= increment; i++)
                {

                    if (increment % i == 0)
                    {
                        factorCount += 1;
                    }
                }
                if (factorCount == 2)
                {
                    Console.WriteLine(increment);
                    counter += 1;
                }
                if (counter == 100)
                {
                    done = true;
                }
                increment += 1;

            }
        }
    }
}