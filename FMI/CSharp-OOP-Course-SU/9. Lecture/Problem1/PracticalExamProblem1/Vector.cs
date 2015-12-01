using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalExamProblem1
{
    public class Vector: IComparable
    {
        private int[] arr;
        private int firstIndex;


        public int[] Arr
        {
            get
            {
                return arr;
            }
            set
            {
                if (value == null)
                {
                    throw new FormatException("Value must be array!");
                }
                arr = new int[value.Length];
                for (int i = 0; i < value.Length; i++)
                {
                    arr[i] = value[i];
                }
                
            }
        }

        public int FirstIndex
        {
            get
            {
                return firstIndex;
            }
            set
            {
                if (value < 0)
                {
                    throw new FormatException("First index must be positive number");
                }
                firstIndex = value;
            }
        }

        public Vector(int firstIndex, int[] array)
        {
            Arr = array;
            FirstIndex = firstIndex;
        }
        public Vector() : this(0, new int[] { 0 }) { }

        public Vector(Vector v):this(v.FirstIndex, v.Arr){}

        public override string ToString()
        {
            return string.Format("First index: {0} and array: {1}", FirstIndex, string.Join(", ", Arr));
        }


        public int CompareTo(object obj)
        {
            Vector v = (Vector)obj;
            if (v.FirstIndex > FirstIndex || v.Arr.Length > Arr.Length)
            {
                return -1;
            }
            else if (v.FirstIndex == FirstIndex && v.Arr.Length == Arr.Length) 
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        public override bool Equals(object obj)
        {
            if (obj == null || GetType() != obj.GetType())
            {
                return false;
            }
            Vector v = (Vector)obj;
            if (v.FirstIndex == FirstIndex)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        public override int GetHashCode()
        {
            return ToString().GetHashCode();
        }

        public static bool operator ==(Vector v1, Vector v2)
        {
            if ((object)v1 == null)
            {
                return false;
            }
            return v1.Equals(v2);

        }
        public static bool operator !=(Vector v1, Vector v2)
        {
            if ((object)v1 == null)
            {
                return true;
            }
            return !v1.Equals(v2);
        }
    }
}
