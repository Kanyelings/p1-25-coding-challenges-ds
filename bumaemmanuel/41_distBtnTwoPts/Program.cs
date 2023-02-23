using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace distBtnTwoPts
{
    class program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(getDist(10, 10, 20, 20));
        }
        static double getDist(double x1, double y1, double x2, double y2)
        {
            double d1 = x2 - x1;
            double d2 = y2 - y1;
            return Math.Sqrt(d1 * d1 + d2 * d2);
        }
    }
}