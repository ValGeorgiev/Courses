using System;
namespace Problem4.Heap_Sort
{
    class HeapSort
    {
        private static int n = 0;
        private static int[] array;
        private static int heapSize = 0;
        private static void Heap(int[] array)
        {
            BuildHeap(array);
            for (int i = array.Length - 1; i >= 0; i--)
            {
                SwapElements(array, 0, i);
                heapSize--;
                Heapify(array, 0);
            }
        }

        private static void SwapElements(int[] array, int x, int y)
        {
            int tmp = array[x];
            array[x] = array[y];
            array[y] = tmp;
        }
        private static void BuildHeap(int[] array)
        {
            heapSize = array.Length - 1;
            for (int i = heapSize / 2; i >= 0; i--)
            {
                Heapify(array, i);
            }
        }

        private static void Heapify(int[] array, int index)
        {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int largest = index;

            if (left <= heapSize && array[left] > array[index])
            {
                largest = left;
            }
            if (right <= heapSize && array[right] > array[largest])
            {
                largest = right;   
            }
            if (largest != index)
            {
                SwapElements(array, index, largest);
                Heapify(array, largest);
            }
        }
        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            array = new int[n];
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("list[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }
            Heap(array);
            Console.WriteLine("({0})", string.Join(", ", array));
        }
    }
}
