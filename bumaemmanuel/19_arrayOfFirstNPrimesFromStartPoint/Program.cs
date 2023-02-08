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
            Console.WriteLine("input start number:");
            int startNum = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("input number of primes:");
            int nPrimes = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine();
            int[] arr = getPrimes(startNum, nPrimes);
            for (int k = 0; k < arr.Length; k++)
            {
                Console.WriteLine(arr[k]);

            }
        }
        static int[] getPrimes(int startNum, int nPrimes)
        {
            int[] arr = new int[nPrimes];
            int primeCount = 0;
            int sn = startNum;
            int arrayIndex = 0;
            while (primeCount < nPrimes)
            {
                int factorCount = 0;
                for (int i = 1; i <= sn; i++)
                {

                    if (sn % i == 0)
                    {
                        factorCount += 1;
                    }
                }
                if (factorCount == 2)
                {
                    arr[arrayIndex] = sn;
                    primeCount += 1;
                    arrayIndex += 1;

                }

                sn += 1;
            }
            return arr;
        }
    }
}