using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2
{
    public class TestMotors
    {
        public static void Main()
        {
            Bus firstBus = new Bus(12, true, "BUS123", 100.0);
            Truck firstTruck = new Truck(100, "TRUCK1", 150.0);
            PrivateCar firstCar = new PrivateCar(4, "VN123LD", 40.2);
            MiniBus firstMiniBus = new MiniBus();
            Vehicle[] arr = new Vehicle[4];
            arr[0] = firstBus;
            arr[1] = firstTruck;
            arr[2] = firstCar;
            arr[3] = firstMiniBus;

            for (int i = 0; i < arr.Length; i++)
            {
                arr[i].GiveInfo();
            }

        }
    }
}
