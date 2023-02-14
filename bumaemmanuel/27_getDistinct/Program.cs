using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Text;

namespace printOneToHundred
{
    class program
    {
        static void Main(string[] args)
        {
            int[] arr = { 1, 2, 3, 6, -1, 2, 9, 7, 10, -1, 100 };
            int[] arrDistinct = getDistinct(arr);
            for (int i = 0; i < arrDistinct.Length; i++)
            {
                Console.WriteLine(arrDistinct[i]);
            }
        }
        static int[] getDistinct(int[] arr)
        {
            List<int> li = new List<int>();
            for (int i = 0; i < arr.Length; i++)
            {
                if (!isInArray(arr[i], li.ToArray()))
                {
                    li.Add(arr[i]);
                }
            }
            return li.ToArray();

        }
        static bool isInArray(int n, int[] arr)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                if (n == arr[i])
                {
                    return true;
                }
            }
            return false;

        }
    }
}