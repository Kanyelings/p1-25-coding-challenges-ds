using System;
using System.Linq;

namespace Exercise
{
    class Program
    {
            static void Main(string[] args){
            int[] array1 = new int[] { 3, 5, 2, 9, 12, 14 };
            int[] array2 = new int[] { 30, 32, 34, 36, 38 };

            int count1 = array1.Length;
            int count2 = array2.Length;
            int[] arrayResult = new int[count1 + count2];

            int a = 0, b = 0;   // indexes in origin arrays
            int i = 0;          // index in result array

            // join
            while (a < count1 && b < count2)
            {
                if (array1[a] <= array2[b])
                {
                    // element in first array at current index 'a'
                    // is less or equals to element in second array at index 'b'
                    arrayResult[i++] = array1[a++];
                }
                else
                {
                    arrayResult[i++] = array2[b++];
                }
            }

            // tail
            if (a < count1)
            {
                // fill tail from first array
                for (int j = a; j < count1; j++)
                {
                    arrayResult[i++] = array1[j];
                }
            }
            else
            {
                // fill tail from second array
                for (int j = b; j < count2; j++)
                {
                    arrayResult[i++] = array2[j];
                }
            }

            // print result
            Console.WriteLine("Result is {{ {0} }}", string.Join(",", arrayResult.Select(e => e.ToString())));

                    }
    }
}