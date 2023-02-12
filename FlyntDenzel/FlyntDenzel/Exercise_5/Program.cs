using System;

namespace Exercise
{
    class Program
    {
        static void Main(string[] args){
                int sum = 0;
            for (int i = 1; i <= 10; i++)
            {
                 sum = sum + i;
            }
                Console.WriteLine($"The value of the sum from 1 to 10 is {sum}");
        }
    }
}