using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Text;

namespace sumCDS
{
    class program
    {
        static void Main(string[] args)
        {

            string s = "1.5,2.3,3.1,4,5.5,6,7,8,9,10.9";
            double ans = sum(s);
            Console.WriteLine(ans);


        }
        static double sum(string s)
        {
            double ans = 0;
            double temp;
            string str = "";
            for (int i = 0; i < s.Length; i++)
            {
                if (s[i] != ',')
                {
                    str += s[i];

                }
                if (s[i] == ',' || i == (s.Length - 1))
                {
                    temp = Convert.ToDouble(str);
                    ans += temp;
                    str = "";
                }

            }
            return ans;
        }

    }
}