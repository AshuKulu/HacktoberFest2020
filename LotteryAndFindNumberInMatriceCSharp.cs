using System;
using System.Collections.Generic;

//Brazilian Portuguese

namespace FinalTest
{
    public class Program
    {
        public static void Main(string[] args)
        {
            char option = '0';

            do
            {
                Console.WriteLine("\nEscolha uma aplicação para executar:\n     1 - Encontrar número em matriz;\n     2 - Loteria;\n     0 - Sair do programa.");

                option = Convert.ToChar(Console.ReadLine());

                switch (option)
                {
                    case '1':
                        SearchNumberInMatrice();
                        break;

                    case '2':
                        Lottery();
                        break;

                    case '0':
                        Console.WriteLine("\nVocê saiu do programa!\n", option);
                        break;

                    default:
                        Console.WriteLine("\nOpção inválida!");
                        break;
                }

            } while (option != '0');

        }

        public static void Lottery()
        {
            bool wagersExistenceCondition = false;
            int wagers = 0;
            // Para evitar números mágicos
            int betsPerWager = 50;
            int min = 0;
            int max = 100;

            Console.WriteLine("\nInforme quantas apostas deseja realizar (máx. 10 apostas) !\n");
            do
            {
                wagers = Convert.ToInt16(Console.ReadLine());
                wagersExistenceCondition = wagers < 1 || wagers > 10;

                if (wagersExistenceCondition)
                {
                    Console.WriteLine("\nPor favor, digite um número entre 1 e 10");
                }
            } while (wagersExistenceCondition);

            int[][] bets = new int[wagers][];
            for (int wager = 0; wager < wagers; wager++)
            {
                bets[wager] = CreateAndPopulateArray(betsPerWager, min, max);
                Array.Sort(bets[wager]);
            }

            int lotterySize = 20;
            int[] lottery = CreateAndPopulateArray(lotterySize, min, max, false);
            Array.Sort(lottery);

            Console.Write("\nO texto printado abaixo é altamente dependente de um tamanho mínimo de 1366px, pois o write é dependente do tamanho do monitor.");
            Console.Write("\nO terminal deve estar maximizado!");
            Console.WriteLine("\nA coluna X é a posição, e não valores das apostas!");

            Console.WriteLine("\nApostas realizadas: ");

            Console.Write("\nX   | ");

            for (int bet = 0; bet + 1 < betsPerWager + 1; bet++)
            {

                if (bet + 1 < 10)
                {
                    Console.Write("{0}   ", bet + 1);
                }
                else
                {
                    Console.Write("{0}  ", bet + 1);

                }
            }

            for (int wager = 0; wager < wagers; wager++)
            {
                Console.WriteLine("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

                if (wager + 1 < 10)
                {
                    Console.Write("{0}   | ", wager + 1);
                }
                else
                {
                    Console.Write("{0}  | ", wager + 1);

                }
                for (int bet = 0; bet < betsPerWager; bet++)
                {
                    if (bets[wager][bet] < 10)
                    {
                        Console.Write("{0}   ", bets[wager][bet]);

                    }
                    else if (bets[wager][bet] >= 10 && bets[wager][bet] < 100)
                    {
                        Console.Write("{0}  ", bets[wager][bet]);
                    }
                    else
                    {
                        Console.Write("{0} ", bets[wager][bet]);
                    }
                }
            }
            Console.WriteLine();

            Console.Write("\nResultado da loteria: ");
            foreach (var result in lottery)
            {
                Console.Write("{0} ", result);
            }

            Console.WriteLine();

            for (int wager = 0; wager < bets.Length; wager++)
            {
                int hits = 0;
                List<int> hittedNumbers = new List<int>();

                foreach (var bet in bets[wager])
                {
                    foreach (var result in lottery)
                    {
                        if (bet == result)
                        {
                            hittedNumbers.Add(bet);
                            hits++;
                        }
                    }
                }
                Console.WriteLine();
                Console.Write("\nA quantidade de acertos na {0}ª aposta foi: {1}!", wager + 1, hits);

                Console.Write("\n   Números acertados na aposta: ");
                hittedNumbers.Sort();
                foreach (var number in hittedNumbers)
                {
                    Console.Write("{0} ", number);
                }
            }
            Console.WriteLine();

        }

        public static void SearchNumberInMatrice()
        {
            // Condição para o número existir (definido após a leitura do input);
            bool numberExistenceCondition = false;
            // Para evitar números mágicos;
            int matriceSize = 20;
            int min = 1;
            int max = 501;
            int number = 0;

            Console.WriteLine("\nDigite um número de 1 à 500 para que o mesmo seja localizado na matriz 20x20!\n");
            do
            {
                number = Convert.ToInt16(Console.ReadLine());

                numberExistenceCondition = number >= max || number < 1;

                if (numberExistenceCondition)
                {
                    Console.WriteLine("\nPor favor, digite um número entre 1 e 500");
                }

            } while (numberExistenceCondition);

            int[,] matrice = CreateAndPopulateMatrice(matriceSize, matriceSize, min, max);

            MatriceNumber matriceNumber = SearchRepeatedNumberInMatrice(number, matrice, matriceSize, matriceSize);

            if (!matriceNumber.isFound())
            {
                Console.WriteLine("\nO número escolhido não foi encontrado ({0})!", number);
            }
            else
            {
                Console.WriteLine("\nO número escolhido ({2}) foi encontrado na linha {0} e na coluna {1}", matriceNumber.getLine() + 1, matriceNumber.getColumn() + 1, number);
            }

            Console.WriteLine("\nAlerta de spam! Esses métodos printam muito texto, devido ao tamanho da matriz (20x20).");
            Console.WriteLine("\nTambém pode estar bugado, pois o write é dependente do tamanho do monitor.");
            Console.WriteLine("\nUm terminal full em uma tela 1366px já deve funcionar corretamente.");
            Console.WriteLine("\nA linha e coluna X são as posições, e não valores da matriz!");

            char spam = 'N';

            Console.WriteLine("\nDeseja ver a matriz utilizada? (S/N)");

            spam = Convert.ToChar(Console.ReadLine());

            switch (spam)
            {
                case 'S':
                    PrintTwoDimensionalMatrice(matrice, matriceSize, matriceSize);
                    break;
                case 's':
                    PrintTwoDimensionalMatrice(matrice, matriceSize, matriceSize);
                    break;
                default:
                    break;
            }

            Console.WriteLine("\nDeseja ver se algum número foi repetido? (S/N)");

            spam = Convert.ToChar(Console.ReadLine());

            switch (spam)
            {
                case 'S':
                    CheckRepeatedMatriceNumbers(matrice);
                    break;
                case 's':
                    CheckRepeatedMatriceNumbers(matrice);
                    break;
                default:
                    break;
            }

        }

        public static int GenerateRandomNumber(int min, int max)
        {
            Random random = new Random();
            return random.Next(min, max);
        }

        public static int[] CreateAndPopulateArray(int size, int min, int max, bool askManualFill = true)
        {
            int[] array = new int[size];
            bool isNumberRepeated = false;
            bool isNumberInvalid = true;
            char manualFill;
            int number;
            for (int item = 0; item < array.Length; item++)
            {
                array[item] = -1;
            }

            if (askManualFill)
            {
                Console.WriteLine("\nDeseja preencher a aposta manualmente (S/N)?");
                manualFill = Convert.ToChar(Console.ReadLine());

            }
            else
            {
                manualFill = 'N';
            }

            for (int item = 0; item < array.Length; item++)
            {
                switch (manualFill)
                {
                    case 'S':
                        Console.WriteLine("\nEscolha um número de 0-99 ({0} restantes)!", array.Length - item);
                        do
                        {

                            number = Convert.ToInt16(Console.ReadLine());
                            isNumberRepeated = SearchRepeatedNumberInArray(number, array);
                            isNumberInvalid = number < min || number >= max;

                            if (isNumberInvalid)
                            {
                                Console.WriteLine("\nPor favor, escolha um número entre 0-99 ({0} restantes)!", array.Length - item);
                            }

                            if (isNumberRepeated)
                            {
                                Console.WriteLine("\nEsse número já está presente nessa aposta, escolha outro número ({0} restantes)!", array.Length - item);
                            }

                        } while (isNumberRepeated || isNumberInvalid);
                        break;
                    case 's':
                        Console.WriteLine("\nEscolha um número de 0-99 ({0} restantes)!", array.Length - item);
                        do
                        {

                            number = Convert.ToInt16(Console.ReadLine());
                            isNumberRepeated = SearchRepeatedNumberInArray(number, array);
                            isNumberInvalid = number < min || number >= max;

                            if (isNumberInvalid)
                            {
                                Console.WriteLine("\nPor favor, escolha um número entre 0-99 ({0} restantes)!", array.Length - item);
                            }
                            else if (isNumberRepeated)
                            {
                                Console.WriteLine("\nEsse número já está presente nessa aposta, escolha outro número ({0} restantes)!", array.Length - item);
                            }

                        } while (isNumberRepeated || isNumberInvalid);
                        break;
                    default:
                        do
                        {
                            number = GenerateRandomNumber(min, max);
                            isNumberRepeated = SearchRepeatedNumberInArray(number, array);
                        } while (isNumberRepeated);

                        break;
                }



                array[item] = number;
            }

            return array;
        }

        public static int[,] CreateAndPopulateMatrice(int matriceLines, int matriceColumns, int min, int max)
        {
            int[,] matrice = new int[matriceLines, matriceColumns];

            for (int line = 0; line < matriceLines; line++)
            {
                for (int column = 0; column < matriceColumns; column++)
                {
                    int number = GenerateRandomNumber(min, max);
                    MatriceNumber matriceNumber = SearchRepeatedNumberInMatrice(number, matrice, matriceLines, matriceColumns);
                    do
                    {
                        number = GenerateRandomNumber(min, max);
                        matriceNumber = SearchRepeatedNumberInMatrice(number, matrice, matriceLines, matriceColumns);
                    } while (matriceNumber.isFound());

                    matrice[line, column] = number;
                }
            }

            return matrice;
        }

        public static bool SearchRepeatedNumberInArray(int number, int[] array)
        {
            bool found = false;
            for (int size = 0; size < array.Length; size++)
            {
                if (number == array[size])
                {
                    found = true;
                }
            }

            return found;
        }

        public static MatriceNumber SearchRepeatedNumberInMatrice(int inputNumber, int[,] inputMatrice, int matriceLines, int matriceColumns)
        {
            // Esse método será utilizado tanto para pesquisar o número, quanto para
            // preencher a matriz 20x20, 
            // True: O número, linha e coluna são retornados;
            // False: Retorna apenas false, com os outros campos vazios.

            MatriceNumber matriceNumber = new MatriceNumber();

            for (int line = 0; line < matriceLines; line++)
            {
                for (int column = 0; column < matriceColumns; column++)
                {
                    if (inputNumber == inputMatrice[line, column])
                    {
                        matriceNumber.setFound(true);
                        matriceNumber.setValue(inputMatrice[line, column]);
                        matriceNumber.setLine(line);
                        matriceNumber.setColumn(column);
                    }
                }
            }

            return matriceNumber;
        }

        public static void CheckRepeatedMatriceNumbers(int[,] inputMatrice)
        {
            // Esse método foi criado para provar que nenhum número foi repetido
            var dict = new Dictionary<int, int>();

            foreach (var value in inputMatrice)
            {
                if (dict.ContainsKey(value))
                    dict[value]++;
                else
                    dict[value] = 1;
            }

            foreach (var pair in dict)
            {
                if (pair.Key < 10)
                {

                    Console.WriteLine("\nO valor {0}   apareceu {1} vez(es)!", pair.Key, pair.Value);
                }
                else if ((pair.Key >= 10 && pair.Key < 100))
                {
                    Console.WriteLine("\nO valor {0}  apareceu {1} vez(es)!", pair.Key, pair.Value);
                }
                else
                {
                    Console.WriteLine("\nO valor {0} apareceu {1} vez(es)!", pair.Key, pair.Value);

                }
            }
        }

        private static void PrintTwoDimensionalMatrice(int[,] matrice, int matriceLines, int matriceColumns)
        {
            // Esse método printa a matriz, de forma legível
            Console.WriteLine("");

            Console.Write("\n-------------------------------------------------------------------------------------------------------------------------------\n");

            Console.Write("| X   | ");

            for (int line = 0; line < matriceColumns; line++)
            {
                if (line + 1 < 10)
                {
                    Console.Write("{0}   | ", line + 1);
                }
                else if (line + 1 >= 10 && line + 1 < 100)
                {
                    Console.Write("{0}  | ", line + 1);
                }
            }

            Console.Write("\n-------------------------------------------------------------------------------------------------------------------------------\n");
            for (int line = 0; line < matriceLines; line++)
            {
                if (line + 1 < 10)
                {
                    Console.Write("| {0}   | ", line + 1);
                }
                else if (line + 1 >= 10 && line + 1 < 100)
                {
                    Console.Write("| {0}  | ", line + 1);
                }

                for (int column = 0; column < matriceColumns; column++)
                {
                    if (matrice[line, column] < 10)
                    {
                        Console.Write(string.Format("{0}   | ", matrice[line, column]));
                    }
                    else if (matrice[line, column] >= 10 && matrice[line, column] < 100)
                    {
                        Console.Write(string.Format("{0}  | ", matrice[line, column]));
                    }
                    else if (matrice[line, column] >= 100)
                    {
                        Console.Write(string.Format("{0} | ", matrice[line, column]));
                    }
                }

                Console.Write("\n-------------------------------------------------------------------------------------------------------------------------------\n");
            }

            Console.WriteLine("");
        }
    }

    public class MatriceNumber
    {
        private int value = -1;
        private bool found = false;
        private int line = -1;
        private int column = -1;

        public int getLine()
        {
            return this.line;
        }

        public void setLine(int line)
        {
            this.line = line;
        }

        public int getColumn()
        {
            return this.column;
        }

        public void setColumn(int column)
        {
            this.column = column;
        }

        public int getValue()
        {
            return this.value;
        }

        public void setValue(int value)
        {
            this.value = value;
        }

        public bool isFound()
        {
            return this.found;
        }

        public void setFound(bool found)
        {
            this.found = found;
        }
    }
}
