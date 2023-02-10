using System;
namespace Exercise
{
    public class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the Number : ");
            int num = int.Parse(Console.ReadLine());
            int sum = 0, rem;
           
            while (num > 0)
            {
                rem = num % 10;
                sum = sum + rem;
                num = num / 10;
            }
            
            Console.WriteLine($"The Sum of Digits is : {sum}");
            Console.ReadKey();
        }
    }
}