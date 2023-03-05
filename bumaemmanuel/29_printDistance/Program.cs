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
            Console.WriteLine("How many first primes to display distance: ");
            int n = Convert.ToInt32(Console.ReadLine());
            printDist(n);
        }
        static void printDist(int n)
        {
            int lastPrime = 2;
            int i = lastPrime + 1;
            int primeCount = 1;
            while (primeCount < n)
            {
                if (checkPrime(i))
                {
                    primeCount += 1;
                    Console.WriteLine(i - lastPrime + "\t" + i + " - " + lastPrime);
                    lastPrime = i;
                }
                i++;

            }
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