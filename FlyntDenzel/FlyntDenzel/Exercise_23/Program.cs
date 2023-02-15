using System;
namespace LogicalPrograms
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter a String : ");
            string originalString = Console.ReadLine();//nullable types
            string reverseString = string.Empty;
            for (int i = originalString.Length - 1; i >= 0; i--)//nullable types
            {
                reverseString += originalString[i];
            }
            Console.Write($"Reverse String is : {reverseString} ");
            Console.ReadLine();
        }      
    }
}