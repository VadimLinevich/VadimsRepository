using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.Json;
using System.IO;
using System.Xml.Serialization;
using System.Xml.Linq;
using LinevichVadimLab6;

namespace Option.Domain8
{
    public class FileService<T>: IFileService<T> where T : class
    { 
        public IEnumerable<T> ReadFile(string fileName)
        {
            string jsonstring = File.ReadAllText(fileName);
            return JsonSerializer.Deserialize<List<T>>(jsonstring);
        }
        public void SaveData(IEnumerable<T> data, string fileName)
        {
            string jsonstring = JsonSerializer.Serialize(data);
            File.WriteAllText(fileName, jsonstring);
        }
    }
}
