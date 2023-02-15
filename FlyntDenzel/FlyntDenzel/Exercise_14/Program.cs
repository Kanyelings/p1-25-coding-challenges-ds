using System;
namespace Exercise
{
    public class Program
    {
        public static void Main()
        {
            int num1 = 0, num2 = 1, next_num, num_elm;
            Console.Write("Enter the number of elements to Print : ");
            num_elm = int.Parse(Console.ReadLine());
            if(num_elm < 2)
            {
                Console.Write("Please Enter a number greater than two");
            }
            else
            {
                Console.Write(num1 + " " + num2 + " ");

                for(int i = 2; i < num_elm; i++)
                {
                    next_num = num1 + num2;
                    Console.Write(next_num + " ");
                    num1 = num2;
                    num2 = next_num;
                }
            }
            
            Console.ReadKey();
        }
    }
}