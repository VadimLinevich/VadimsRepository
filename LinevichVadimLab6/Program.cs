using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.Json;
using System.IO;
using System.Reflection;

namespace LinevichVadimLab6
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Employee> list1 = new List<Employee>();
            string filename = @"C:\FilesC#\Lab6json.json";
            Assembly asm = Assembly.LoadFrom("Option.Domain8.dll");
            list1.Add(new Employee { age = 18, name = "Vadim Linevich", IsMan = true });
            list1.Add(new Employee { age = 18, name = "Vlad Linevich", IsMan = true });
            list1.Add(new Employee { age = 23, name = "JC Denton", IsMan = true });
            list1.Add(new Employee { age = 36, name = "Adam Jensen", IsMan = true });
            list1.Add(new Employee { age = 62, name = "Bob Page", IsMan = true });
            Type type = asm.GetType("Option.Domain8.FileService`1").MakeGenericType(typeof(Employee));
            object obj = Activator.CreateInstance(type);
            MethodInfo method = type.GetMethod("SaveData");
            method.Invoke(obj, new object[] { list1, filename });
            MethodInfo method2 = type.GetMethod("ReadFile");
            object a = method2.Invoke(obj, new object[] {filename });
            var Result = ((IEnumerable)a).Cast<Employee>().ToList();
            foreach(Employee employee in Result)
            {
                Console.WriteLine(employee.age);
                Console.WriteLine(employee.name);
                Console.WriteLine(employee.IsMan);
            }
        }
    }
}
