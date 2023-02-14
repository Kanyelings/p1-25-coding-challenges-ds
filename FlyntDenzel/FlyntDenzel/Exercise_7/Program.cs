using System;

namespace Exercise
{
    class Program
    {
        static void Main(string[] args){
            int sum = 0;
            for (int i = 12; i < 30; i += 2)
            {
                sum = sum +i;
            }
            Console.WriteLine($"The sum of even digits from 10 to 30 is {sum}");
        }
    }
}