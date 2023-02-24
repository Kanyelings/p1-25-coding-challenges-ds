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
            string str = "javascript";
            Console.WriteLine(str);
            string reversed = reverseStr(str);
            Console.WriteLine(reversed);

        }
        static string reverseStr(string str)
        {
            char[] str1 = str.ToCharArray();
            Array.Reverse(str1);
            string reversed = new string(str1);
            return reversed;

        }
    }
}