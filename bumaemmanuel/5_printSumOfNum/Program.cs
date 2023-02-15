using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Text;
using System.Linq;

namespace Program
{
    class program
    {
        static void Main(string[] args)
        {
            int result = 0;
            for (int i = 1; i <= 10; i++)
            {
                result += i;
            }
            Console.WriteLine(result);

        }
    }
}