using System;
class MOvetor
{
    static void Main()
    {
        int[] valor = new int[4];
        int tam = valor.Length, aux = 0;
        for (int i = 0; i < tam; i++)
        {
            Console.WriteLine("digite um valor na {0}° posiçao",i+1);
            valor[i] = int.Parse(Console.ReadLine());
        }
        for (int i = 0; i < tam; i++)
        {
            aux = valor[i];
            valor[i] = valor[tam - 1];
            valor[tam - 1] = aux;
        }
        for (int i = 0; i < tam; i++)
        {
            Console.WriteLine($"este valor esta na {i+1}° posiçao" + valor[i]);
        }

    }
}