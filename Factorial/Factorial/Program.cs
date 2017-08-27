using System;
class program
{
    static void Main()
    {
        int i, n, fact = 1;
        Console.WriteLine("Enter a any number to find it's factotial  :");
        n = Convert.ToInt32(Console.ReadLine());
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        Console.WriteLine(fact);
        Console.ReadKey();
    }
}