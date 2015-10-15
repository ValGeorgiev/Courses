using System;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;

namespace Problem1.Read_HTML
{
    class ReadHTML
    {
        private const string InputFileName = "HTMLFile.html";
        private const string OutputFileName = "NewFile.txt";
        private const string Charset = "windows-1251";

        private static void PrintBuffer(StreamWriter writer, StringBuilder buffer, Regex regex)
        {
            string str = buffer.ToString();
            string trimmed = str.Trim();
            string textOnly = regex.Replace(trimmed, "\n");
            if (!string.IsNullOrEmpty(textOnly))
            {
                writer.WriteLine(textOnly);
            }
        }
        static void Main()
        {
            StringBuilder buffer = new StringBuilder();
            int openedTags = 0;

            if (!File.Exists(InputFileName))
            {
                Console.WriteLine("File {0} not found!", InputFileName);
                return;
            }

            StreamReader reader = null;
            StreamWriter writer = null;

            try
            {
                Encoding encoding = Encoding.GetEncoding(Charset);

                reader = new StreamReader(InputFileName, encoding);
                writer = new StreamWriter(OutputFileName, false, encoding);
                Regex regex = new Regex("\n\\s+");
                while (true)
                {
                    int nextChar = reader.Read();
                    if (nextChar == -1)
                    {
                        PrintBuffer(writer, buffer, regex);
                        break;
                    }
                    char ch = (char)nextChar;
                    if (ch == '<')
                    {
                        if (openedTags == 0)
                        {
                            PrintBuffer(writer, buffer, regex);
                            buffer.Length = 0;
                        }
                        openedTags++;
                    }
                    else if (ch == '>')
                    {
                        openedTags--;
                    }
                    else
                    {
                        if (openedTags == 0)
                        {
                            buffer.Append(ch);
                        }
                    }
                }
            }
            catch (IOException ioex)
            {
                Console.WriteLine("Can not read file " + InputFileName + " .");
            }
            finally
            {
                if (reader != null)
                {
                    reader.Close();
                }
                if (writer != null)
                {
                    writer.Close();
                }
            }
        }
    }
}
