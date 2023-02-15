using System;

namespace Exercise
{
    class Program
    {
        static void Main(string[] args){
            int sum = 0;
            int[] arr = new int[4] {1,4,3,5};
            for (int i = 0; i < arr.Length; i++)
            {
                sum = sum + arr[i];
            }
                Console.WriteLine($"The sum is {sum}");
        }
    }
}