using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GeometryDraw.Labs
{
    public interface ITask<T>
    {
        public string Answer { get; set; }
        public void StartTask();
    }
}
