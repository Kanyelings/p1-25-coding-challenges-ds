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
            int[] arr1 = { 1, 2, 3, 10, 5, 3, 14 };
            int[] arr2 = { -1, 4, 5, 6, 14 };
            int[] combinedArr = mergeLeft(arr1, arr2);
            for (int i = 0; i < combinedArr.Length; i++)
            {
                Console.WriteLine(combinedArr[i]);
            }

        }

        static int[] mergeLeft(int[] arr1, int[] arr2)
        {
            List<int> li = new List<int>();
            bool found = false;

            for (int i = 0; i < arr1.Length; i++)
            {
                for (int j = 0; j < arr2.Length; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        found = true;
                    }
                }
                if (!found)
                {
                    li.Add(arr1[i]);
                }
                else
                {
                    found = false;
                }

            }
            int[] arr = li.ToArray();
            return arr;
        }

    }

}