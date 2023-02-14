using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Linq;
using System.Text;

namespace Program
{
    class program
    {
        static void Main(string[] args)
        {
            // int fact1 = 1;
            // for (int i = 1; i <= 10; i++)
            // {
            //     fact1 *= i;
            // }
            // Console.WriteLine(fact1);

            int fact2;
            fact2 = fact(10);
            Console.WriteLine(fact2);


        }
        static int fact(int x)
        {
            if (x == 1 || x == 0)
            {
                return 1;
            }
            else
            {
                return x * fact(x - 1);
            }
        }
    }
}