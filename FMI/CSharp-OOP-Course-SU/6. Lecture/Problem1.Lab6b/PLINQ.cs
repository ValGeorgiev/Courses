using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1.Lab6b
{
    class PLINQ
    {
        static void Main(string[] args)
        {

            var customers = new[] { 
                new { ID = 1, FirstName = "Sandeep" , LastName = "Ramani" }, 
                new { ID = 2, FirstName = "Dharmik" , LastName = "Chotaliya" },
                new { ID = 3, FirstName = "Nisar" , LastName = "Kalia" } , 
                new { ID = 4, FirstName = "Ravi" , LastName = "Mapara" } , 
                new { ID = 5, FirstName = "Hardik" , LastName = "Mistry" },
                new { ID = 6, FirstName = "Sandy" , LastName = "Ramani" }, 
                new { ID = 7, FirstName = "Jigar" , LastName = "Shah" }, 
                new { ID = 8, FirstName = "Kaushal" , LastName = "Parik" } , 
                new { ID = 9, FirstName = "Abhishek" , LastName = "Swarnker"},
                new { ID = 10, FirstName = "Sanket" , LastName = "Patel" },
                new { ID = 11, FirstName = "Dinesh" , LastName = "Prajapati" }, 
                new { ID = 12, FirstName = "Jayesh" , LastName = "Patel" }, 
                new { ID = 13, FirstName = "Nimesh" , LastName = "Mishra" }, 
                new { ID = 14, FirstName = "Shiva" , LastName = "Reddy" } , 
                new { ID = 15, FirstName = "Jasmin" , LastName = "Malviya"},
                new { ID = 16, FirstName = "Haresh" , LastName = "Bhanderi"}, 
                new { ID = 17, FirstName = "Ankit" , LastName = "Ramani" }, 
                new { ID = 18, FirstName = "Sanket" , LastName = "Shah" } , 
                new { ID = 19, FirstName = "Amit" , LastName = "Shah" } , 
                new { ID = 20, FirstName = "Nilesh" , LastName = "Soni" } 
            };


            //ProblemA
            
            //Parallel.For(0, customers.Length, i =>
            //{
            //    if(5 <= customers[i].ID && customers[i].ID <= 15 )
            //    {
            //        Console.WriteLine(customers[i].ID);
            //    }
            //});

            //ProblemB
            //var appliancesByType = customers
            //    .GroupBy(item => item.LastName)
            //    .ToDictionary(grp => grp.Key, grp => grp.ToList());

            //Parallel.ForEach(appliancesByType, item =>
            //{
            //    Console.WriteLine(item.Key);
            //});

            //ProblemC
            var query =
                from value in customers
                let fullName = value.ID + ", " + value.FirstName + " " + value.LastName
                select fullName;

            Parallel.ForEach(query, item =>
            {
                Console.WriteLine(item);
            });



        }
       
    }
}
