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
            int[] arr2 = { 1, 4, 5, 6, 14 };
            int[] combinedArr = mergeExclusive(arr1, arr2);
            for (int i = 0; i < combinedArr.Length; i++)
            {
                Console.WriteLine(combinedArr[i]);
            }

        }
        static int[] mergeExclusive(int[] arr1, int[] arr2)
        {
            List<int> newArr = new List<int>();
            bool found = false;
            for (int i = 0; i < arr1.Length; i++)
            {
                for (int j = 0; j < arr2.Length; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    newArr.Add(arr1[i]);

                }
                found = false;
            }
            for (int i = 0; i < arr2.Length; i++)
            {
                for (int j = 0; j < arr1.Length; j++)
                {
                    if (arr2[i] == arr1[j])
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    newArr.Add(arr2[i]);
                }
                found = false;
            }

            int[] arr = newArr.ToArray();
            return arr;
        }
    }

}