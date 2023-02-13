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
            for (int i = 1; i <= 12; i++)
            {
                result = i * 7;
                Console.WriteLine(i + " * 7 = " + result);
            }
        }
    }
}