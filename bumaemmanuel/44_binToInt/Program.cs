using System;

namespace binToInt
{
    class program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(binaryToNumber("0110"));
        }
        static int binaryToNumber(string bin)
        {
            return Convert.ToInt32(bin, 2);
        }
    }
}