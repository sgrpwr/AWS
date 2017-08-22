using System;

    class Program
    {
        static void Main()
        {
        Console.WriteLine("Please enter your Name :");
        string userName = Console.ReadLine();
        //Concatination has been used below
        //Console.WriteLine("Hello " + userName);
        
        //Place Holder has been used below
        Console.WriteLine("Hello {0}", userName);
        Console.ReadKey();
    }
}

