using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Text;

namespace numOfWords
{
    class program
    {
        static void Main(string[] args)
        {
            int words = countWords("one is epic");
            Console.WriteLine(words);

        }
        static int countWords(string text)
        {
            int words = 0;
            if (text.Length > 0 && !isSeparator(text[0]))
            {
                words += 1;
            }
            for (int i = 1; i < text.Length; i++)
            {
                char currentChar = text[i];
                char prevChar = text[i - 1];
                if (!isSeparator(currentChar) && isSeparator(prevChar))
                {
                    words += 1;
                }

            }

            return words;
        }
        static bool isSeparator(char c)
        {
            char[] separator = { ' ', '\t', '\n', ',', '\r', '.', '?', '!', ';' };
            return separator.Contains(c);
        }
    }
}