using System;

namespace Exercise
{
    class Program
    {
        static void Main(string[] args){
            int fc = 1;
            for (int i = 1; i <= 10; i++)
            {
                fc = fc * i;
            }
            Console.WriteLine($"The value of 10! is :{fc}");
        }
    }
}