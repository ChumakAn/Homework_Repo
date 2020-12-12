#include "Header.h"
Weather::Weather()
{

}

Weather::~Weather()
{

}
 int Weather::getDay()
{
	 return day;
}
 string Weather::getCity()
 {
	 return city;
 }
 string Weather::getCountry()
 {
	 return country;
 }
 double Weather::getTemp()
 {
	 return temp;
 }
 double Weather::getHumidity()
 {
	 return humidity;
 }
 double Weather::getWindspeed()
 {
	 return windspeed;
 }
 type Weather::getWeatherType()
 {
	 return WeatherType;
 }
 
void Weather:: setData(int day, string city, string country, double temp, double humidity, double windspeed , type WeatherType )
{
	if (day >= 1 && day <= 365)
	 this->day = day;
	 this->city = city;
	 this->country = country;
	 this->temp = temp;
	 this->humidity = humidity;
	 this->windspeed = windspeed;
	 this->WeatherType = WeatherType;
 }

 
 WeatherCalendar::WeatherCalendar()
 {
 }
WeatherCalendar:: ~WeatherCalendar()
 {

 }
void WeatherCalendar:: getLastWeekWeather()
{
	arr = new Weather[10];
	arr[0].setData(15, "Lviv", "Ukraine", 17, 83, 17.4, RAINY);
	arr[1].setData(16, "Kyiv", "Ukrane", 23, 45, 13.8, RAINY);
	arr[2].setData(15, "Warsaw", "Poland", 12, 48, 16.4, MISTY);
	arr[3].setData(16, "Berlin", " Germany", 13.5, 33, 20.5, FOGGY);
	arr[4].setData(21, "Nurnberg", " Germany", 19, 29, 12.6, SUNNY);
	arr[5].setData(21, "Paris", " France", 21, 21.9, 22.5, CLOUDY);
	arr[6].setData(4, "Copenhagen", "Denmark", 7, 54, 25.8, MISTY);
	arr[7].setData(18, "Lutsk", "Ukraine", 9.8, 32, 15.8, FOGGY);
	arr[8].setData(4, "Odessa", "Ukraine", 21, 63, 29.8, RAINY);
	arr[9].setData(7, "Zhytomyr", "Ukraine", 15.8, 36.9, 14.8, SUNNY);

}

Weather* WeatherCalendar::  getWeatherArray()
 {
	 return arr;
 }
 
