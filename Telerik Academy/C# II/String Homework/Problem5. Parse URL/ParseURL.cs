using System;
namespace Problem5.Parse_URL
{
    class ParseURL
    {
        private static string url = "";

        private static void Parse(string url)
        {
            string protocol = "";
            string server = "";
            string resourse = "";
            int indexServer = 0;
            
            for (int i = 0; i < url.Length; i++)
            {
                if (url[i] == ':' && i < 7)
                {
                    protocol = url.Substring(0, i);
                    indexServer = i + 3;
                }
                if(url[i] == '/' && i > indexServer)
                {
                    server = url.Substring(indexServer, i - indexServer);
                    resourse = url.Substring(i, url.Length - i);
                    break;
                }                
            }
            Console.WriteLine("Protocol: {0}", protocol);
            Console.WriteLine("Server: {0}", server);
            Console.WriteLine("Resourse: {0}", resourse);
        }
        static void Main()
        {
            Console.Write("Url: ");
            url = Console.ReadLine();

            Parse(url);
        }
    }
}
