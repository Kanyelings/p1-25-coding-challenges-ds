using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Text;

namespace getWords
{
    class program
    {
        static void Main(string[] args)
        {
            string text = "Create a function that would return an array of (string), with the words in a sentence()";

            string[] words = wordsGet(text);
            for (int i = 0; i < words.Length; i++)
            {
                Console.WriteLine(words[i]);
            }
        }
        static string[] wordsGet(string text)
        {
            List<string> li = new List<string>();
            int startWord = -1, length = 0;
            char c;
            for (int i = 0; i <= text.Length; i++)
            {
                if (i == text.Length)
                {
                    c = ' ';
                }
                else
                {
                    c = text[i];
                }
                if (!isSeparator(c) && startWord < 0)
                {
                    startWord = i;
                }
                if (!isSeparator(c))
                {
                    length += 1;

                }
                if (isSeparator(c) && startWord >= 0)
                {

                    li.Add(text.Substring(startWord, length));
                    startWord = -1;
                    length = 0;

                }
            }

            return li.ToArray();
        }
        static bool isSeparator(char c)
        {

            char[] separator = { ' ', '\t', '\n', ',', '\r', '.', '?', '!', ';', '(', ')' };
            return separator.Contains(c);
        }
    }
}