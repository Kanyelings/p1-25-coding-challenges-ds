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
            int[] arr = { 2, 3, -1, 5, 7, 9, 10, 15, 95 };
            int max;
            max = arrayMax(arr);
            Console.WriteLine("max is " + max);
        }
        static int arrayMax(int[] arr)
        {
            int max = arr[0];
            for (int i = 1; i < arr.Length; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }

            }
            return max;
        }
    }
}