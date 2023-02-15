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
            int[] arr = { -5, 10, -3, 12, -9, 5, 90, 0, 1 };
            int[] positiveArr = getPositive(arr);
            for (int i = 0; i < positiveArr.Length; i++)
            {
                Console.WriteLine(positiveArr[i]);
            }

        }
        static int[] getPositive(int[] arr)
        {
            List<int> list = new List<int>();
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] >= 0)
                {
                    list.Add(arr[i]);
                }
            }
            int[] arr1 = list.ToArray();
            return arr1;

        }
    }
}