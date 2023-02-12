using System;

namespace Exercise
{
    class Program
    {
        static void Main(string[] args){
            int[] arr = new int[] {1,2,3,4,5,6,7};
            LeftRotation(arr, arr.Length, 2);
            Print(arr, arr.Length);//outputs  the array after two shifts
            Console.ReadLine(); 
        }

        private static void Print(int[] arr, int n){
            for (int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " ");
            }
        }

        private static void LeftRotation(int[] arr, int n, int v)
        {
            for (int i = 0; i < v; i++)
            {
                int temp = arr[0];
                for (int j = 1; j < n; j++)//n being the size of the array
                {
                    arr[j-1] = arr[j];
                }
                arr[n-1] = temp;
            }
        }
    }
}