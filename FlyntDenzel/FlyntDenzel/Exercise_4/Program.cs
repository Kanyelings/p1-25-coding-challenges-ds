using System;

namespace Exercise
{
    class Program
    {
        static void Main(string[] args){
            for (int i = 0; i <= 12; i++)
            {
                Console.WriteLine();
                for (int j = 0; j <= 12; j++)
                {
                    var tb = j * i;
                    Console.WriteLine($" {i} * {j} = {tb}");
                }
            }
        }
    }
}