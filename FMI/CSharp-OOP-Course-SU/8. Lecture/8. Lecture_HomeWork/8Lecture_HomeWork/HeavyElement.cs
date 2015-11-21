using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _8Lecture_HomeWork
{
    public abstract class HeavyElement
    {
        private double weight;

        public double Weight
        {
            get
            {
                return weight;
            }
            set
            {
                if (value > 0)
                {
                    weight = value;
                }
                else
                {
                    weight = 0;
                }
            }
        }

        public HeavyElement(double weight)
        {
            Weight = weight;
        }
        public HeavyElement() : this(0) { }

        public abstract double CalcWeight();
    }
}
