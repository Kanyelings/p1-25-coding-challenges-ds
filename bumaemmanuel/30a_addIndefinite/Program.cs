using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Text;

namespace addIndefinite
{
    class program
    {
        static void Main(string[] args)
        {
            string s1 = "2909034221912398942349";
            string s2 = "1290923909029309499";
            string sum = Add(s1, s2);
            // Console.WriteLine(sum);


        }
        static string Add(string s1, string s2)
        {
            int len = Math.Max(s1.Length, s2.Length);
            string sum = "";
            int digitSum;
            int carry = 0;
            int digit1;
            int digit2;
            for (int i = len - 1; i >= 0; i--)
            {
                digit1 = digitFromRight(s1, i);
                Console.WriteLine(digit1);
                digit2 = digitFromRight(s2, i);
                Console.WriteLine("digit1,digit2 " + digit1 + ", " + digit2);
                digitSum = digit1 + digit2 + carry;
                if (digitSum > 10)
                {
                    carry = 1;
                    digitSum %= 10;
                }
                else
                {
                    carry = 0;
                }
                sum += Convert.ToString(digitSum);

            }
            if (carry > 0)
            {
                sum += Convert.ToString(carry);
            }

            // now to reverse sum to give answer
            char[] arr = sum.ToArray();
            Array.Reverse(arr);
            sum = new string(arr);
            return sum;
        }
        static int digitFromRight(string s, int i)
        {
            if (i > s.Length - 1)
            {
                return 0;
            }

            char t = s[i];
            int num = t - '0';
            return num;


        }
    }
}