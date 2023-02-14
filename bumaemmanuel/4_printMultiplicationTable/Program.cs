using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
using System.Threading.Tasks;

namespace Program
{
    class program
    {
        static void Main(string[] args)
        {
            int result;
            for (int i = 1; i <= 10; i++)
            {
                for (int j = 1; j <= 12; j++)
                {
                    result = j * i;
                    Console.WriteLine(i + "* " + j + " = " + result);
                }
                Console.WriteLine();
            }
        }
    }
}