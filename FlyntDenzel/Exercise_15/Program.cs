using System;
namespace Exercise
{
    public class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Please enter the nth number of the Fibonacci Series : ");
            int nth_num = int.Parse(Console.ReadLine());

            nth_num = nth_num - 1;
            Console.Write(nth_fibonacci(nth_num));
            Console.ReadKey();
        }

        private static int nth_fibonacci(int number)
        {
            if ((number == 0) || (number == 1))
            {
                return number;
            }
            else
            {
                return (nth_fibonacci(number - 1) + nth_fibonacci(number - 2));
            }
        }
    }
}