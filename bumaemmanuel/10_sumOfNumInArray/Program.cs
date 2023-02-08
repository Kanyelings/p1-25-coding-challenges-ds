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
            int sum;
            sum = sumArray(arr);
            Console.WriteLine("sum is " + sum);
        }
        static int sumArray(int[] arr)
        {
            int sum = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                sum += arr[i];
            }
            return sum;
        }
    }
}