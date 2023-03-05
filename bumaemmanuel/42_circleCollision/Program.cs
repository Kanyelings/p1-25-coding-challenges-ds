using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace circleCollision
{
    class program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(collisionCircle(10, 10, 20, 20, 20, 10));
        }
        static double getDist(double x1, double y1, double x2, double y2)
        {
            double d1 = x2 - x1;
            double d2 = y2 - y1;
            return Math.Sqrt(d1 * d1 + d2 * d2);
        }
        static bool collisionCircle(double x1, double y1, double x2, double y2, double r1, double r2)
        {
            double d = getDist(x1, y1, x2, y2);
            return d <= r1 + r2;
        }
    }
}