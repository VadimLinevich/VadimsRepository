using System;

namespace TwenteyOneTheGame
{
    class Program
    {

        static void Main(string[] args)
        {
            string temp;
            int p, t, c, score1, score2, counter;
            string z;
            counter = 0;
            t = 0;
            score1 = 0;
            score2 = 0;
            Random a = new Random();
            string[] deck = new string[36] { "6h", "7h", "8h", "9h", "0h", "Jh", "Qh", "Kh", "Ah", "6d", "7d", "8d", "9d", "0d", "Jd", "Qd", "Kd", "Ad", "6s", "7s", "8s", "9s", "0s", "Js", "Qs", "Ks", "As", "6c", "7c", "8c", "9c", "0c", "Jc", "Qc", "Kc", "Ac" };
            for (int i = 0; i < 36; i++)
            {
                temp = deck[i];
                p = a.Next(0, 35);
                deck[i] = deck[p];
                deck[p] = temp;
            }
            Console.WriteLine("First player takes");
            for (int k = 35; k >=0 ; k-- )
            { 
                if (deck[k] == "Ah" )
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Ace heart");
                    Console.ResetColor();
                    Console.WriteLine("How many points do you want to take(1 or 11)");
                    while(int.TryParse(Console.ReadLine(), out c) == false || (c != 1 && c != 11) )
                    {
                        Console.WriteLine("Enter correct number");
                    }
                    if (c == 1)
                    {
                        score1 = score1 + 1;
                    }
                    else
                    {
                        if (c == 11)
                        {
                            score1 = score1 + 11;
                        }
                    }
                }
                if (deck[k] == "Kh")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take King heart");
                    Console.ResetColor();
                    score1 = score1 + 4;
                }
                if(deck[k] == "Qh")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Queen heart");
                    Console.ResetColor();
                    score1 = score1 + 3;
                }
                if (deck[k] == "Jh")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Jack heart");
                    Console.ResetColor();
                    score1 = score1 + 2;
                }
                if (deck[k] == "0h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 10 heart");
                    Console.ResetColor();
                    score1 = score1 + 10;
                }
                if (deck[k] == "9h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 9 heart");
                    Console.ResetColor();
                    score1 = score1 + 9;
                }
                if (deck[k] == "8h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 8 heart");
                    Console.ResetColor();
                    score1 = score1 + 8;
                }
                if (deck[k] == "7h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 7 heart");
                    Console.ResetColor();
                    score1 = score1 + 7;
                }
                if (deck[k] == "6h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 6 heart");
                    Console.ResetColor();
                    score1 = score1 + 6;
                }
                if (deck[k] == "Ad")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Ace diamond");
                    Console.ResetColor();
                    Console.WriteLine("How many points do you want to take(1 or 11)");
                    while (int.TryParse(Console.ReadLine(), out c) == false || (c != 1 && c != 11))
                    {
                        Console.WriteLine("Enter correct number");
                    }
                    if (c == 1)
                    {
                        score1 = score1 + 1;
                    }
                    else
                    {
                        if (c == 11)
                        {
                            score1 = score1 + 11;
                        }
                    }
                }
                if (deck[k] == "Kd")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take King diamond");
                    Console.ResetColor();
                    score1 = score1 + 4;
                }
                if (deck[k] == "Qd")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Queen diamond");
                    Console.ResetColor();
                    score1 = score1 + 3;
                }
                if (deck[k] == "Jd")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Jack diamond");
                    Console.ResetColor();
                    score1 = score1 + 2;
                }
                if (deck[k] == "0d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 10 diamond");
                    Console.ResetColor();
                    score1 = score1 + 10;
                }
                if (deck[k] == "9d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 9 diamond");
                    Console.ResetColor();
                    score1 = score1 + 9;
                }
                if (deck[k] == "8d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 8 diamond");
                    Console.ResetColor();
                    score1 = score1 + 8;
                }
                if (deck[k] == "7d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 7 diamond");
                    Console.ResetColor();
                    score1 = score1 + 7;
                }
                if (deck[k] == "6d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 6 diamond");
                    Console.ResetColor();
                    score1 = score1 + 6;
                }
                if (deck[k] == "As")
                {
                    Console.WriteLine("You take Ace spade");
                    Console.WriteLine("How many points do you want to take(1 or 11)");
                    while (int.TryParse(Console.ReadLine(), out c) == false || (c != 1 && c != 11))
                    {
                        Console.WriteLine("Enter correct number");
                    }
                    if (c == 1)
                    {
                        score1 = score1 + 1;
                    }
                    else
                    {
                        if (c == 11)
                        {
                            score1 = score1 + 11;
                        }
                    }
                }
                if (deck[k] == "Ks")
                {
                    Console.WriteLine("You take King spade");
                    score1 = score1 + 4;
                }
                if (deck[k] == "Qs")
                {
                    Console.WriteLine("You take Queen spade");
                    score1 = score1 + 3;
                }
                if (deck[k] == "Js")
                {
                    Console.WriteLine("You take Jack spade");
                    score1 = score1 + 2;
                }
                if (deck[k] == "0s")
                {
                    Console.WriteLine("You take 10 spade");
                    score1 = score1 + 10;
                }
                if (deck[k] == "9s")
                {
                    Console.WriteLine("You take 9 spade");
                    score1 = score1 + 9;
                }
                if (deck[k] == "8s")
                {
                    Console.WriteLine("You take 8 spade");
                    score1 = score1 + 8;
                }
                if (deck[k] == "7s")
                {
                    Console.WriteLine("You take 7 spade");
                    score1 = score1 + 7;
                }
                if (deck[k] == "6s")
                {
                    Console.WriteLine("You take 6 spade");
                    score1 = score1 + 6;
                }
                if (deck[k] == "Ac")
                {
                    Console.WriteLine("You take Ace club");
                    Console.WriteLine("How many points do you want to take(1 or 11)");
                    while (int.TryParse(Console.ReadLine(), out c) == false || (c != 1 && c != 11))
                    {
                        Console.WriteLine("Enter correct number");
                    }
                    if (c == 1)
                    {
                        score1 = score1 + 1;
                    }
                    else
                    {
                        if (c == 11)
                        {
                            score1 = score1 + 11;
                        }
                    }
                }
                if (deck[k] == "Kc")
                {
                    Console.WriteLine("You take King club");
                    score1 = score1 + 4;
                }
                if (deck[k] == "Qc")
                {
                    Console.WriteLine("You take Queen club");
                    score1 = score1 + 3;
                }
                if (deck[k] == "Jc")
                {
                    Console.WriteLine("You take Jack club");
                    score1 = score1 + 2;
                }
                if (deck[k] == "0c")
                {
                    Console.WriteLine("You take 10 club");
                    score1 = score1 + 10;
                }
                if (deck[k] == "9c")
                {
                    Console.WriteLine("You take 9 club");
                    score1 = score1 + 9;
                }
                if (deck[k] == "8c")
                {
                    Console.WriteLine("You take 8 club");
                    score1 = score1 + 8;
                }
                if (deck[k] == "7c")
                {
                    Console.WriteLine("You take 7 club");
                    score1 = score1 + 7;
                }
                if (deck[k] == "6c")
                {
                    Console.WriteLine("You take 6 club");
                    score1 = score1 + 6;
                }
                Console.WriteLine($"Your score is { score1 }");
                counter = counter + 1;
                if (score1 > 21)
                {
                    Console.WriteLine($"You lose because your points > then 21( {score1} )");
                    break;
                }
                Console.WriteLine("Do you want to take more?(yes/no)");
                z = Console.ReadLine();
                if (z == "yes")
                {

                }
                if (z == "no")
                {
                    break;
                }
                while (z != "yes" && z != "no")
                {
                    Console.WriteLine("Enter correct word");
                    z = Console.ReadLine();
                    if (z == "yes")
                    {

                    }
                    else
                    {
                        if (z == "no")
                        {
                            t = 1;
                        }
                    }
                }
                if (t == 1)
                {
                    break;
                }
            }
            t = 0;
            Console.WriteLine($"Your final score is { score1 }");
            Console.WriteLine("Second player takes");
            for (int k = 35 - counter; k >= 0; k--)
            {
                if (deck[k] == "Ah")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Ace heart");
                    Console.ResetColor();
                    Console.WriteLine("How many points do you want to take(1 or 11)");
                    while (int.TryParse(Console.ReadLine(), out c) == false || (c != 1 && c != 11))
                    {
                        Console.WriteLine("Enter correct number");
                    }
                    if (c == 1)
                    {
                        score2 = score2 + 1;
                    }
                    else
                    {
                        if (c == 11)
                        {
                            score2 = score2 + 11;
                        }
                    }
                }
                if (deck[k] == "Kh")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take King heart");
                    Console.ResetColor();
                    score2 = score2 + 4;
                }
                if (deck[k] == "Qh")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Queen heart");
                    Console.ResetColor();
                    score2 = score2 + 3;
                }
                if (deck[k] == "Jh")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Jack heart");
                    Console.ResetColor();
                    score2 = score2 + 2;
                }
                if (deck[k] == "0h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 10 heart");
                    Console.ResetColor();
                    score2 = score2 + 10;
                }
                if (deck[k] == "9h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 9 heart");
                    Console.ResetColor();
                    score2 = score2 + 9;
                }
                if (deck[k] == "8h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 8 heart");
                    Console.ResetColor();
                    score2 = score2 + 8;
                }
                if (deck[k] == "7h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 7 heart");
                    Console.ResetColor();
                    score2 = score2 + 7;
                }
                if (deck[k] == "6h")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 6 heart");
                    Console.ResetColor();
                    score2 = score2 + 6;
                }
                if (deck[k] == "Ad")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Ace diamond");
                    Console.ResetColor();
                    Console.WriteLine("How many points do you want to take(1 or 11)");
                    while (int.TryParse(Console.ReadLine(), out c) == false || (c != 1 && c != 11))
                    {
                        Console.WriteLine("Enter correct number");
                    }
                    if (c == 1)
                    {
                        score2 = score2 + 1;
                    }
                    else
                    {
                        if (c == 11)
                        {
                            score2 = score2 + 11;
                        }
                    }
                }
                if (deck[k] == "Kd")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take King diamond");
                    Console.ResetColor();
                    score2 = score2 + 4;
                }
                if (deck[k] == "Qd")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Queen diamond");
                    Console.ResetColor();
                    score2 = score2 + 3;
                }
                if (deck[k] == "Jd")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take Jack diamond");
                    Console.ResetColor();
                    score2 = score2 + 2;
                }
                if (deck[k] == "0d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 10 diamond");
                    Console.ResetColor();
                    score2 = score2 + 10;
                }
                if (deck[k] == "9d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 9 diamond");
                    Console.ResetColor();
                    score2 = score2 + 9;
                }
                if (deck[k] == "8d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 8 diamond");
                    Console.ResetColor();
                    score2 = score2 + 8;
                }
                if (deck[k] == "7d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 7 diamond");
                    Console.ResetColor();
                    score2 = score2 + 7;
                }
                if (deck[k] == "6d")
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You take 6 diamond");
                    Console.ResetColor();
                    score2 = score2 + 6;
                }
                if (deck[k] == "As")
                {
                    Console.WriteLine("You take Ace spade");
                    Console.WriteLine("How many points do you want to take(1 or 11)");
                    while (int.TryParse(Console.ReadLine(), out c) == false || (c != 1 && c != 11))
                    {
                        Console.WriteLine("Enter correct number");
                    }
                    if (c == 1)
                    {
                        score2 = score2 + 1;
                    }
                    else
                    {
                        if (c == 11)
                        {
                            score2 = score2 + 11;
                        }
                    }
                }
                if (deck[k] == "Ks")
                {
                    Console.WriteLine("You take King spade");
                    score2 = score2 + 4;
                }
                if (deck[k] == "Qs")
                {
                    Console.WriteLine("You take Queen spade");
                    score2 = score2 + 3;
                }
                if (deck[k] == "Js")
                {
                    Console.WriteLine("You take Jack spade");
                    score2 = score2 + 2;
                }
                if (deck[k] == "0s")
                {
                    Console.WriteLine("You take 10 spade");
                    score2 = score2 + 10;
                }
                if (deck[k] == "9s")
                {
                    Console.WriteLine("You take 9 spade");
                    score2 = score2 + 9;
                }
                if (deck[k] == "8s")
                {
                    Console.WriteLine("You take 8 spade");
                    score2 = score2 + 8;
                }
                if (deck[k] == "7s")
                {
                    Console.WriteLine("You take 7 spade");
                    score2 = score2 + 7;
                }
                if (deck[k] == "6s")
                {
                    Console.WriteLine("You take 6 spade");
                    score2 = score2 + 6;
                }
                if (deck[k] == "Ac")
                {
                    Console.WriteLine("You take Ace club");
                    Console.WriteLine("How many points do you want to take(1 or 11)");
                    while (int.TryParse(Console.ReadLine(), out c) == false || (c != 1 && c != 11))
                    {
                        Console.WriteLine("Enter correct number");
                    }
                    if (c == 1)
                    {
                        score2 = score2 + 1;
                    }
                    else
                    {
                        if (c == 11)
                        {
                            score2 = score2 + 11;
                        }
                    }
                }
                if (deck[k] == "Kc")
                {
                    Console.WriteLine("You take King club");
                    score2 = score2 + 4;
                }
                if (deck[k] == "Qc")
                {
                    Console.WriteLine("You take Queen club");
                    score2 = score2 + 3;
                }
                if (deck[k] == "Jc")
                {
                    Console.WriteLine("You take Jack club");
                    score2 = score2 + 2;
                }
                if (deck[k] == "0c")
                {
                    Console.WriteLine("You take 10 club");
                    score2 = score2 + 10;
                }
                if (deck[k] == "9c")
                {
                    Console.WriteLine("You take 9 club");
                    score2 = score2 + 9;
                }
                if (deck[k] == "8c")
                {
                    Console.WriteLine("You take 8 club");
                    score2 = score2 + 8;
                }
                if (deck[k] == "7c")
                {
                    Console.WriteLine("You take 7 club");
                    score2 = score2 + 7;
                }
                if (deck[k] == "6c")
                {
                    Console.WriteLine("You take 6 club");
                    score2 = score2 + 6;
                }
                Console.WriteLine($"Your score is { score2 }");
                counter = counter + 1;
                if (score2 > 21)
                {
                    Console.WriteLine($"You lose because your points > then 21( {score2} )");
                    break;
                }
                Console.WriteLine("Do you want to take more?(yes/no)");
                z = Console.ReadLine();
                if (z == "yes")
                {

                }
                if (z == "no")
                {
                    break;
                }
                while (z != "yes" && z != "no")
                {
                    Console.WriteLine("Enter correct word");
                    z = Console.ReadLine();
                    if (z == "yes")
                    {

                    }
                    else
                    {
                        if (z == "no")
                        {
                            t = 1;
                        }
                    }
                }
                if (t == 1)
                {
                    break;
                }
            }
            Console.WriteLine($"Your final score is { score2 }");
            Console.WriteLine($"First player final score is { score1 }");
            Console.WriteLine($"Second player final score is { score2 }");
            if (score1 > 21 && score2 > 21)
            {
                Console.WriteLine("You both lost");
                Environment.Exit(0);
            }
            if (score1 > 21)
            {
                Console.WriteLine("Second player win");
                Environment.Exit(0);
            }
            if (score2 > 21)
            {
                Console.WriteLine("First player win");
                Environment.Exit(0);
            }
            if (score1 == score2)
            {
                Console.WriteLine("Draw");
                Environment.Exit(0);
            }
            if (21 - score1 < 21 - score2)
            {
                Console.WriteLine("First player win");
                Environment.Exit(0);
            }
            if (21 - score2 < 21 - score1)
            {
                Console.WriteLine("Second player win");
                Environment.Exit(0);
            }
            Console.ReadKey();
        }
    }
}
