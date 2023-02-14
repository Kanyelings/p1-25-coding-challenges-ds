using System;

namespace Exercise
{
    class Program
    {
        static void Main(string[] args){
            for (int i = 2; i <= 100; i++)
            {
                bool Prime = true;
                for (int j = 2; j < i; j++)
                {
                    if (i % j == 0)
                    {
                        Prime = false;
                        break;
                    }
                }
                if (Prime)
                {
                    Console.WriteLine(i);
                }
            }
        }
    }
}