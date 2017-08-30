using System;
class program
{
    static void Main()
    {
        Console.WriteLine("Enter the sides(a,b,c) of a triangle  :");
        int a = Convert.ToInt32(Console.ReadLine());
        int b = Convert.ToInt32(Console.ReadLine());
        int c = Convert.ToInt32(Console.ReadLine());
        double s = (a + b + c) / 2;
        double area = Math.Sqrt(s * (s - a) * (s - b) * (s - c));
        Console.WriteLine(area);
        if (a == b && b == c)
        {
            Console.WriteLine("This is an Equilateral trangle and Area is {0} :", area);
        }
        else if (a == b && b != c || a != b && b == c)
        {
            Console.WriteLine("This is an Isosceles trangle and Area is {0} :", area);
        }
        else
        {
            Console.WriteLine("This is an Scalene trangle and Area is {0} :", area);
        }
        Console.ReadKey();
    }
}