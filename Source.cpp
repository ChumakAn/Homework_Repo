#include "Header.h"

double findMaxTemperature(Weather* arr, int day);

string isLvivWeather(double humidity, type WeatherType);

void SortMassive(Weather* arr, int size);

int main()
{
	
	int k; 
	cout << "Enter the day" << endl;
	cin >> k ;
	WeatherCalendar object; 
	object.getLastWeekWeather();
	cout<<"Max Temperature:" << findMaxTemperature(object.getWeatherArray(), k) << endl;


	Weather c;
	c.setData(17, " Wroclaw", "Warsaw", 25, 75, 40, RAINY);
	cout << "prediction:" << isLvivWeather(c.getHumidity(), c.getWeatherType()) << endl;
	cout << endl;


	Weather c2;
	c2.setData(56, "Lviv", "Ukraine", 14.8, 89, 13, RAINY);
	cout << "prediction:" << isLvivWeather(c2.getHumidity(), c2.getWeatherType()) << endl;

	cout << "Enter humidity:";
	double humidity;
	cin >> humidity;
	cout << endl;
	cout << "Enter weather type:";
	int a;
	cin >> a;
	type WeatherType;
	WeatherType = (type)a;
	cout << isLvivWeather(humidity, WeatherType);
	cout << endl;
	SortMassive(object.getWeatherArray(), 10);
	
	return 0;

}
double findMaxTemperature(Weather* arr, int day)
{

	double max = -500;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i].getDay() == day && arr[i].getTemp() > max)
			max = arr[i].getTemp();


	}
	if (max == -500)
		cout << "Not enough data" << endl;
	return max;
}
string isLvivWeather(double humidity, type WeatherType)
{
	string m;
	if (humidity > 80 && WeatherType == RAINY)
	{
		 m = "Typical day in Lviv";
	}
	else
		m = "You`re lucky , man" ;
	return m;
}
 void SortMassive(Weather* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 ; j++)
		{
			if (arr[j].getDay() > arr[j + 1].getDay())
			{
				Weather b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i].getDay() << "  ";
		cout << arr[i].getCity() << "  " ;
		cout << arr[i].getCountry() << "  " ;
		cout << arr[i].getTemp() << "  " ;
		cout << arr[i].getHumidity() << "  " ;
		cout << arr[i].getWindspeed() << "  " ;
		cout << endl;
	}
}