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
            int[] arr = { 1, 2, 3 };

            Console.WriteLine(arr[0]);
            rotateRight(arr);
            Console.WriteLine(arr[0]);
        }
        static void rotateRight(int[] arr)
        {
            int[] newArr = arr;
            arr[0] = newArr[2];
            arr[1] = newArr[0];
            arr[2] = newArr[1];


        }
    }
}