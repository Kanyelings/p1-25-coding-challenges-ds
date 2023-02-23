using System;
using System.Linq;
using System.Threading.Tasks;
using System.Text;
using System.Collections.Generic;

namespace bubbleSort
{
    class program
    {
        static void Main(string[] args)
        {
            int[] ar = { 23, 1000, 1, -1, 8, 3 };
            int[] sorted = bSort(ar);
            for (int i = 0; i < sorted.Length; i++)
            {
                Console.WriteLine(sorted[i]);
            }
        }
        static int[] bSort(int[] ar)
        {
            bool shouldSort = true, swapped = false;
            int temp, i = 0;
            while (shouldSort)
            {
                if (ar[i + 1] < ar[i])
                {
                    temp = ar[i + 1];
                    ar[i + 1] = ar[i];
                    ar[i] = temp;
                    swapped = true;

                }

                if (i == ar.Length - 2 && swapped)
                {
                    i = -1;
                    swapped = false;
                }
                else if (i == ar.Length - 2 && !swapped)
                {
                    shouldSort = false;
                }

                i += 1;


            }

            return ar;

        }

    }
}