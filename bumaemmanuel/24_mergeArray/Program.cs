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
            int[] arr1 = { 1, 2, 3 };
            int[] arr2 = { 4, 5, 6 };
            int[] combinedArr = mergeArr(arr1, arr2);
            Console.WriteLine(combinedArr[0]);
            Console.WriteLine(combinedArr[5]);
        }
        static int[] mergeArr(int[] arr1, int[] arr2)
        {

            return arr1.Concat(arr2).ToArray();
        }
    }

}