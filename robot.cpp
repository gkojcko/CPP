#include <iostream>
using namespace std;



class Robot{
public:

	//accessors

	string getRobotName(){
		return robotName;
	}

	int getBatteryLevel(){
		return robotBattery;
	}

	void setName(string robotName){
		this->robotName = robotName;
	}

	void setBattery(int robotBattery){
		this->robotBattery = robotBattery;
	}

	// no-args constructor

	Robot(){
		cout << " Welcome to your robot configuration, enter a name to begin!" << endl ;
		cin  >> robotName;
		cout << "A robot with the name "<<robotName << " has been created - Battery Capacity : 500 " << endl ;
		this -> robotBattery = 500;
	}

	//methods

	void moveForward(){
		if(robotBattery - 100 <= batterylimit){
			cout<<robotName <<" cannot perform on low battery and started charging itself."<< endl;
			charge();
		}
		setBattery(robotBattery - 100);
		cout<< robotName << " Is moving forwards!" << " Current battery = " << robotBattery <<" (100 points lost)"<< endl;

	}

	void turnLeft(){
		if(robotBattery - 50 <= batterylimit){
			cout<<robotName <<" cannot perform on low battery and started charging itself." <<endl;
			charge();
		}
		setBattery(robotBattery - 50);
		cout<< robotName << " Is turning 90 degrees left!" << " Current battery = " << robotBattery << " (50 points lost)"<< endl;
	}

	void turnRight(){
		if(robotBattery - 50 <= batterylimit){
			cout<<robotName <<" cannot perform on low battery and started charging itself."<<endl;
			charge();
		}
		setBattery(robotBattery - 50);
		cout<< robotName << " Is turning 90 degrees right!" << " Current battery = " << robotBattery << " (50 points lost)"<< endl;
	}

	void sayHello(){
		if(robotBattery - 75 <= batterylimit){
			cout<<robotName <<" cannot perform on low battery and started charging itself."<<endl;
			charge();
		}
		setBattery(robotBattery - 75);
		cout<<"Hello my name is " << robotName << "!" << " Current battery = " << robotBattery << " (75 points lost)"<< endl;
	}

	void charge(){
		setBattery(robotBattery + 300);
		cout<<"Charging complete!" <<" Current battery = " << robotBattery << " (300 points replenished)" <<endl;

	}

//attributes

private:
	string robotName;
	int robotBattery;
	int batterylimit = 50;


};


int main() {
	Robot takis;

	takis.moveForward();
	takis.turnLeft();
	takis.moveForward();
	takis.turnRight();
	takis.sayHello();
	takis.moveForward();
	takis.turnLeft();
	takis.sayHello();
	takis.turnRight();
	takis.moveForward();
	takis.sayHello();
	takis.moveForward();
	takis.turnLeft();
	takis.sayHello();



	return 0;

}
