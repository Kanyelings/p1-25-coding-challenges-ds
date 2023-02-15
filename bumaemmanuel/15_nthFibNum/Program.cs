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
            int fib = findFib(10);
            Console.WriteLine(fib);

        }

        static int findFib(int x)
        {
            if (x == 0)
            {
                return 0;
            }
            else if (x == 1)
            {
                return 1;
            }
            else
            {
                return findFib(x - 1) + findFib(x - 2);
            }
        }
    }
}