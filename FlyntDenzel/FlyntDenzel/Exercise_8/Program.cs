using System;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections.Generic;

namespace Program
{
    class Program
    {
        static void Main(string[] args){
            double conv;
            double cel;
            Console.WriteLine("Enter the temperature in degree celsius");
            cel = Convert.ToDouble(Console.ReadLine());
            conv = Celsius(cel);
            Console.WriteLine(conv);
        }

        static double Celsius(double cel){
            return cel * 33.8f;
        } 
    }
}
