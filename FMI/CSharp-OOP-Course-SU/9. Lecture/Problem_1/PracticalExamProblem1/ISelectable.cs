using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalExamProblem1
{
    public interface ISelectable
    {
        int this[int index]
        {
            get;
            set;
        }
    }

}
