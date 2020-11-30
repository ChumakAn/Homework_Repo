#pragma once
#include <iostream>

using namespace std;
enum type { SUNNY, CLOUDY, RAINY, FOGGY, MISTY };
class Weather
{
	
protected:
	int day;
	string city;
	string country;
	double temp;
	double humidity;
	double windspeed;
	type WeatherType;
	 


public:
	
	
	Weather();
	~Weather();
	int getDay();
	string getCity();
	string getCountry();
	double getTemp();
	double getHumidity();
	double getWindspeed();
	type getWeatherType();
	
	void setData(int day, string city, string country, double temp, double humidity, double windspeed , type WeatherType);
	
	friend string isLvivWeather(double humidity, type WeatherType);
	

};

 class WeatherCalendar
{
	 Weather* arr;

public: 
	
	WeatherCalendar();
	~WeatherCalendar();
	void getLastWeekWeather();
	void AddWeather(Weather object)
	{
		Weather* obj = new Weather[11];
		
		for (int i = 0; i < 10; i++)
		{
			obj[i] = arr[i];
		}
		obj[10] = object;
		delete arr;
		arr = obj;
	}


	Weather* getWeatherArray();

	friend double findMaxTemperature(Weather* arr, int day);
	friend void SortMassive(Weather* arr, int size);
};