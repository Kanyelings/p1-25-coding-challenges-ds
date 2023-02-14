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
            int sum;
            sum = sumDigits(1235231);
            Console.WriteLine(sum);
        }
        static int sumDigits(int num)
        {
            string number = Convert.ToString(num);
            int sum = 0;
            for (int i = 0; i < number.Length; i++)
            {
                sum += Convert.ToInt32(number.Substring(i, 1));
            }
            return sum;
        }

    }
}