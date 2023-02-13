using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Program
{
    class program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input temp in farenheit: ");
            double x, temp;
            x = Convert.ToDouble(Console.ReadLine());
            temp = farenheitToCelsius(x);
            Console.WriteLine("temp in celsius is " + temp);
        }
        static double farenheitToCelsius(double x)
        {
            return (x - 32) / 1.8;
        }
    }
}