#include<iostream>
#include<string>
using namespace std;

class TrafficController
{
	private:
		int trafficDensity;
		bool sensorStatus;
		
	public:
		TrafficController(int density, int senstatus)
		{
			if(density<0)
			{
				throw 501;
			}
			trafficDensity = density;
			sensorStatus = (senstatus==1);
			if(!sensorStatus){
				throw 502;
			}
		}
		
		void controlTraffic(string timeOfDay)
		{
			if(trafficDensity>80){
				throw 503;
			}
			if(timeOfDay=="Morning")
			{
				cout<<"Setting green light longer for incoming traffic.\n";
			}
			else if(timeOfDay=="Evening")
			{
				cout<<"Extending green lights for outbound traffic to ease congestion.\n";
			}
			else if(timeOfDay=="Night")
			{
				cout<<"Night mode activated!.\n";
				cout<<"Balancing signal timings for all directions due to low traffic.\n";
			}
			else
			{
				throw 504;
			}
			cout<<"Traffic controlled successfully.\n";
		}
		
		void status()
		{
			cout<<"Traffic Density: "<<trafficDensity<<endl;
			if(sensorStatus)
			{
				cout<<"Sensor Status:Active and monitoring traffic smoothly.\n";
			}
			else
			{
				cout<<"Sensor Status: System may not function correctly.\n";
			}
		}
};


int main()
{
	try
	{
		int density,sensor;
		string time;
		
		cout<<"Enter traffic density(0-100): ";
		cin>>density;
		cout<<"Is the sensor active?(1 for yes/0 for no): ";
		cin>>sensor;
		TrafficController smartControl(density,sensor);
		cout<<"Enter time of day(Morning/Evening/Night): ";
		cin>>time;
		
		smartControl.controlTraffic(time);
		smartControl.status();
	}
	
	catch(int code)
	{
		if(code==501)
		{
			cout<<"Invalid traffic density!Must be between 0 and 100.\n";
		}
		else if(code==502)
		{
			cout<<"Sensor is inactive.Cannot proceed.\n";
		}
		else if(code==503)
		{
			cout<<"Traffic congestion too high!.Activate alternate route.\n";
		}
		else if(code==504)
		{
			cout<<"Invalid time input! Use Morning, Evening or Night.\n";
		}
		
	}
	return 0;
}
