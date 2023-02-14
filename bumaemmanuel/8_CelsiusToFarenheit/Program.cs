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
            Console.WriteLine("Input temp in celsius: ");
            double x, temp;
            x = Convert.ToDouble(Console.ReadLine());
            temp = celsiusToFarenheit(x);
            Console.WriteLine("temp in farenheit is " + temp);
        }
        static double celsiusToFarenheit(double x)
        {
            return x * 1.8 + 32;
        }
    }
}