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
            Console.WriteLine("input num");
            int num = Convert.ToInt32(Console.ReadLine());
            bool isPrime = checkPrime(num);
            Console.WriteLine(isPrime);
        }

        static bool checkPrime(int num)
        {
            if (num == 0 || num == 1)
            {
                return false;
            }
            int factCount = 0;
            for (int i = 1; i <= num; i++)
            {

                if (num % i == 0)
                {
                    factCount += 1;
                }
            }
            if (factCount == 2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}