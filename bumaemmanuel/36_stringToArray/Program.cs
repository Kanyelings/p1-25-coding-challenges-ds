using System;
using System.Linq;
using System.Threading.Tasks;
using System.Text;
using System.Collections.Generic;

namespace stringToArray
{
    class program
    {
        static void Main(string[] args)
        {
            string text = "I love  C sharp";
            char[] arr = ToArray(text);
            Console.WriteLine(arr[0]);
        }
        static char[] ToArray(string text)
        {
            return text.ToArray();
        }
    }
}