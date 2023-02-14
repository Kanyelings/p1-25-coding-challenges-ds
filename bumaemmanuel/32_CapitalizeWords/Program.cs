using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Text;

namespace CapitalizeWords
{
    class program
    {
        static void Main(string[] args)
        {
            string words = capitalize(" one is xtra epic");
            Console.WriteLine(words);

        }
        static string capitalize(string text)
        {
            string s = "";

            if (text.Length > 0 && !isSeparator(text[0]))
            {
                s += Char.ToUpper(text[0]);

            }
            else
            {
                s += text[0];
            }
            for (int i = 1; i < text.Length; i++)
            {
                char currentChar = text[i];
                char prevChar = text[i - 1];
                if (!isSeparator(currentChar) && isSeparator(prevChar))
                {
                    s += Char.ToUpper(text[i]);
                }
                else
                {
                    s += text[i];
                }

            }

            return s;
        }
        static bool isSeparator(char c)
        {
            char[] separator = { ' ', '\t', '\n', ',', '\r', '.', '?', '!', ';' };
            return separator.Contains(c);
        }
    }
}