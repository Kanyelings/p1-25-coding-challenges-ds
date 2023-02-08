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
            int fib1 = 0;
            int fib2 = 1;
            int temp;
            Console.WriteLine(fib1 + "\n" + fib2);
            for (int i = 3; i <= 10; i++)
            {
                temp = fib2;
                fib2 = fib1 + fib2;
                fib1 = temp;
                Console.WriteLine(fib2);

            }
        }
    }
}