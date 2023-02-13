using System;

namespace Exercise
{
    class Program
    {
        static void Main(string[] args){
            Average();
        }

        static void Average(){
            int[] arr = new int[6] {12,2,3,4,0,10};
            int sum = 0;
            int avg = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                sum = sum + arr[i];
                avg = sum / arr.Length;
            }
                Console.WriteLine(avg);
        }
    }
}